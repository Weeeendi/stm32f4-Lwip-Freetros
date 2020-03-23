#include "SYS_include.h"
#include "lwip/opt.h"
#include "lwip/sys.h"
#include "lwip/api.h"
#include <lwip/sockets.h>

static void TcpSocket_init(void *thread_param)
{
  int sock = -1;
  struct sockaddr_in client_addr;
  
  ip4_addr_t ipaddr;
  
  uint8_t send_buf[]= "This is a TCP Client test...\n";
  
  Lwip_printf("Dest IP addr:%d.%d.%d.%d \t port :%d\n\n",      \
          DEST_IP_ADDR0,DEST_IP_ADDR1,DEST_IP_ADDR2,DEST_IP_ADDR3,DEST_PORT);
  
  IP4_ADDR(&ipaddr,DEST_IP_ADDR0,DEST_IP_ADDR1,DEST_IP_ADDR2,DEST_IP_ADDR3);
  while(1)
  {
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0)
    {
      printf("Socket error\n");
      vTaskDelay(10);
      continue;
    } 

    client_addr.sin_family = AF_INET;      
    client_addr.sin_port = htons(DEST_PORT);   
    client_addr.sin_addr.s_addr = ipaddr.addr;
    memset(&(client_addr.sin_zero), 0, sizeof(client_addr.sin_zero));    

    if (connect(sock, 
               (struct sockaddr *)&client_addr, 
                sizeof(struct sockaddr)) == -1) 
    {
        printf("Connect failed!\n");
        closesocket(sock);
        vTaskDelay(10);
        continue;
    }                                           
    
    printf("Connect to server successful!\n");
    
    while (1)
    {
      if(write(sock,send_buf,sizeof(send_buf)) < 0)
        break;
   
      vTaskDelay(1000);
    }
    
    closesocket(sock);
  }

}

void
TcpClient_init(void)
{
  sys_thread_new("client", TcpSocket_init, NULL, 512, 4);
}
