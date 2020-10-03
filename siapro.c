#include <stdio.h>
#include <stdlib.h>

int Menu(){
	int i=0;
	for(i=0;i<55;i++){
		puts("");
	}
	printf("1. Router\n");
	printf("2. Switch\n");
	printf("3. Exit\n");
	printf("input number: ");
}


int main(){
	FILE *fp;
	fp=fopen("result.txt","w");
	
	int menu;
	int Router;
	int Switch;
	char hostname[101]; 
	char nms_vlan[101];
	char nms_deskripsi[101];
	char akses_vlan[101];
	char akses_deskripsi[101];
	char address[101];
	char subnet[101];
	char gateway[101];
	char port1[101];
	char desc1[101];
	char mode1[101];
	char port2[101];
	char desc2[101];
	char mode2[101];
	char location[101];
	char devicepop[101];
	char domain[101];
	char port[101];
	char desc[101];
	char port_user[101];
	char desc_user[101];
	char mtu_user[101];
	char address_user[101];
	char subnet_user[101];
	char port_pop[101];
	char desc_pop[101];
	char mtu_pop[101];
	char address_pop[101];
	char subnet_pop[101];
	char desc_loopback[101];
	char address_loopback[101];
	char subnet_loopback[101];
	char arahsw[101];
	char setname[101];
	char vlan[101];
	char sid[101];
	char zone[101];
	
	do{
		Menu();
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				do{
				printf("1. Cisco 1941\n");
				printf("2. Cisco 1811\n");
				printf("3. Cisco 891\n");
				printf("4. Cisco ASR920\n");
				printf("5. Mikrotik RB2011\n");
				printf("6. EXIT\n");
				scanf("%d",&Router);
				switch(Router){
					case 1:
						printf("Hostname : ");
						scanf("%s",hostname);
						printf("vlan nms : ");
						scanf("%s",nms_vlan);
						printf("ip address : ");
						scanf("%s",address);
						printf("subnet : ");
						scanf("%s",subnet);
						printf("port : ");
						scanf("%s",port);
						printf("port deskripsi : ");
						scanf("%s",desc);
						printf("Data Berhasil Ditulis, buka file result.txt di folder yg sama dengan program ini\n");
						system("pause");
						fprintf(fp,"================================Result.txt================================\n");
						fprintf(fp,"Enable\nconfig terminal\nhostname %s\ninterface %s\nno shutdown\nend\nconfig terminal\ninterface %s.%s\ndescription %s\nencapsulation dot1Q %s\nip address %s %s\nno shutdown\nend\nconfig terminal\nusername j2m privilege 15 secret multimedia\nenable secret cisco\nline vty 0 4\nlogin local\nno access-class 23 in\ntransport input telnet\ntransport output telnet\nexit\nline console 0\nlogin local\nend\n",hostname,port,port,nms_vlan,desc,nms_vlan,address,subnet);
						fprintf(fp,"================================Result.txt================================\n");
						fclose(fp);
						break;
						case 2:
						printf("Hostname : ");
						scanf("%s",hostname);
						printf("vlan nms : ");
						scanf("%s",nms_vlan);
						printf("ip address : ");
						scanf("%s",address);
						printf("subnet : ");
						scanf("%s",subnet);
						printf("port : ");
						scanf("%s",port);
						printf("port deskripsi : ");
						scanf("%s",desc);
						printf("Data Berhasil Ditulis, buka file result.txt di folder yg sama dengan program ini\n");
						system("pause");
						fprintf(fp,"================================Result.txt================================\n");
						fprintf(fp,"Enable\nconfig terminal\nhostname %s\ninterface %s\nno shutdown\nend\nconfig terminal\ninterface %s.%s\ndescription %s\nencapsulation dot1Q %s\nip address %s %s\nno shutdown\nend\nconfig terminal\nusername j2m privilege 15 secret multimedia\nenable secret cisco\nline vty 0 4\nlogin local\nno access-class 23 in\ntransport input telnet\ntransport output telnet\nexit\nline console 0\nlogin local\nend\n",hostname,port,port,nms_vlan,desc,nms_vlan,address,subnet);
						fprintf(fp,"================================Result.txt================================\n");
						fclose(fp);
							break;
							case 3:
							printf("Hostname : ");
							scanf("%s",hostname);
							printf("vlan nms : ");
							scanf("%s",nms_vlan);
							printf("ip address : ");
							scanf("%s",address);
							printf("subnet : ");
							scanf("%s",subnet);
							printf("port : ");
							scanf("%s",port);
							printf("port deskripsi : ");
							scanf("%s",desc);
							printf("Data Berhasil Ditulis, buka file result.txt di folder yg sama dengan program ini\n");
							system("pause");
							fprintf(fp,"================================Result.txt================================\n");
							fprintf(fp,"Enable\nconfig terminal\nhostname %s\ninterface %s\nno shutdown\nend\nconfig terminal\ninterface %s.%s\ndescription %s\nencapsulation dot1Q %s\nip address %s %s\nno shutdown\nend\nconfig terminal\nusername j2m privilege 15 secret multimedia\nenable secret cisco\nline vty 0 4\nlogin local\nno access-class 23 in\ntransport input telnet\ntransport output telnet\nexit\nline console 0\nlogin local\nend\n",hostname,port,port,nms_vlan,desc,nms_vlan,address,subnet);
							fprintf(fp,"================================Result.txt================================\n");
							fclose(fp);
								break;
								case 4:
									printf("Hostname : ");
									scanf("%s",hostname);
									printf("port arah user : ");
									scanf("%s",port_user);
									printf("deskripsi : ");
									scanf("%s",desc_user);
									printf("MTU : ");
									scanf("%s",mtu_user);
									printf("Ip address : ");
									scanf("%s",address_user);
									printf("Subnet : ");
									scanf("%s",subnet_user);
									printf("port arah POP : ");
									scanf("%s",port_pop);
									printf("deskripsi : ");
									scanf("%s",desc_pop);
									printf("MTU : ");
									scanf("%s",mtu_pop);
									printf("IP address : ");
									scanf("%s",address_pop);
									printf("subnet : ");
									scanf("%s",subnet_pop);
									printf("deskripsi loopback : ");
									scanf("%s",desc_loopback);
									printf("Ip address : ");
									scanf("%s",address_loopback);
									printf("subnet : ");
									scanf("%s",subnet_loopback);
									printf("Data Berhasil Ditulis, buka file result.txt di folder yg sama dengan program ini\n");
									system("pause");
									fprintf(fp,"================================Result.txt================================\n");
									fprintf(fp,"Enable\nconfig terminal\nhostname %s\nusername j2m privilege 15 password multimedia\nint %s\ndesc %s\nmtu %s\nip address %s %s\nno shutdown\nexit\nint %s\ndesc %s\nmtu %s\nip address %s %s\nno shutdown\nexit\ninterface loopback 0\ndesc %s\nip address %s %s\nno shutdown\nexit\nip ospf network point-to-point\nno shutdown\nexit\nline vty 0 4\nlogin local\nexit\n",hostname,port_user,desc_user,mtu_user,address_user,subnet_user,port_pop,desc_pop,mtu_pop,address_pop,subnet_pop,desc_loopback,address_loopback,subnet_loopback);
									fprintf(fp,"================================Result.txt================================\n");
									fclose(fp);
									break;
									case 5:
										printf("connected to : ");
										scanf("%s",arahsw);
										printf("set name : ");
										scanf("%s",setname);
										printf("port : ");
										scanf("%s",port);
										printf("vlan : ");
										scanf("%s",vlan);
										printf("SID : ");
										scanf("%s",sid);
										printf("IP address : ");
										scanf("%s",address);
										printf("subnet : ");
										scanf("%s",subnet);
										printf("gateway : ");
										scanf("%s",gateway);
										printf("zone : ");
										scanf("%s",zone);
										printf("Data Berhasil Ditulis, buka file result.txt di folder yg sama dengan program ini\n");
										system("pause");
										fprintf(fp,"================================Result.txt================================\n");
										fprintf(fp,"/interface Ethernet\nset 0 comment=Connected To %s\n/interface vlan\nadd interface=%s name=vlan-nms-%s vlan-id=%s comment=%s-%s\n/ip address\nadd address=%s/%s interface=vlan-nms-%s\n/ip route\nadd comment=routing-nms-ms distance=1 dst-address=172.26.120.0/24 gateway=%s\nadd comment=routing-nms-ms distance=1 dst-address=172.26.122.0/24 gateway=%s\n/system identity\nset name=%s\n/system clock\nset time-zone-name=%s\n/user add name= iconplus password= iconplus123 group=full\n",arahsw,port,vlan,vlan,sid,setname,address,vlan,gateway,gateway,setname,zone);
										fprintf(fp,"================================Result.txt================================\n");
										fclose(fp);
										break;
				}	
				}while(Router!=6);
				break;
			case 2:
				do{
					printf("\n1. BDCom\n");
					printf("2. Huawei\n");
					printf("3. Zyxel\n");
					printf("4. Hewlett - Packard\n");
					printf("5. Cisco Catalyst 2960 & 3400\n");
					printf("6. Cisco Catalyst 3600\n");
					printf("7. Cisco Catalyst 3750\n");
					puts("8. Exit");
					printf("Input number: ");
					scanf("%d",&Switch);
					switch(Switch){
						case 1:
							printf("hostname: ");
							scanf("%s",hostname);
							printf("\nNMS\n");
							printf("===============");
							printf("\nVlan : ");
							scanf("%s",nms_vlan);
							printf("\nDeskripsi : ");
							scanf("%s",nms_deskripsi);
							printf("\nVLAN akses\n");
							printf("================");
							printf("\n");
							printf("Vlan : ");
							scanf("%s",akses_vlan);
							printf("\nDeskripsi : ");
							scanf("%s",akses_deskripsi);
							printf("\nIp address : ");
							scanf("%s",address);
							printf("\nSubnet : ");
							scanf("%s",subnet);
							printf("\nIp Gateway : ");
							scanf("%s",gateway);
							printf("\nSwitching Mode\n");
							printf("=================\n");
							printf("Port : ");
							scanf("%s",port1);
							printf("\nDeskripsi : ");
							scanf("%s",desc1);
							printf("\nMode : ");
							scanf("%s",mode1);
							printf("\nPort : ");
							scanf("%s",port2);
							printf("\nDeskripsi : ");
							scanf("%s",desc2);
							printf("\nMode : ");
							scanf("%s",mode2);
							printf("Data Berhasil Ditulis, buka file result.txt di folder yg sama dengan program ini\n");
							system("pause");
							fprintf(fp,"================================Result.txt================================\n");
							fprintf(fp,"enable\nconfig\nhostname %s\nvlan %s\nname %s\nexit\nvlan %s\nname %s\nexit\ninterface vlan %s\nip address %s %s\nno shutdown\nexit\nip route default %s\ninterface %s\ndescription %s\nswitchport mode %s\nswitchport trunk vlan-allowed %s,%s\nno shutdown\nexit\ninterface %s\ndescription %s\nswitchport %s\nswitchport pvid %s\nno shutdown\nexit\nusername j2m password multimedia123\nservice password-encryption\nline vty 0 4\nlogin authentication default\nlogin authorization default\nexit\naaa authentication login default local\naaa authentication enable default none\naaa authorization exec default local\nexit\n",hostname,nms_vlan,nms_deskripsi,akses_vlan,akses_deskripsi,nms_vlan,address,subnet,gateway,port1,desc1,port2,nms_vlan,akses_vlan,desc2,mode1,mode2,akses_vlan);
							fprintf(fp,"================================Result.txt================================\n");
							fclose(fp);
							printf("\n\n");
							
							break;
						case 2:
							printf("hostname: ");
							scanf("%s",hostname);
							printf("\nNMS\n");
							printf("===============");
							printf("\nVlan : ");
							scanf("%s",nms_vlan);
							printf("\nDeskripsi : ");
							scanf("%s",nms_deskripsi);
							printf("\nVLAN akses\n");
							printf("================");
							printf("\n");
							printf("Vlan : ");
							scanf("%s",akses_vlan);
							printf("\nDeskripsi : ");
							scanf("%s",akses_deskripsi);
							printf("\nIp address : ");
							scanf("%s",address);
							printf("\nSubnet : ");
							scanf("%s",subnet);
							printf("\nIp Gateway : ");
							scanf("%s",gateway);
							printf("\nSwitching Mode\n");
							printf("=================\n");
							printf("Port : ");
							scanf("%s",port1);
							printf("\nDeskripsi : ");
							scanf("%s",desc1);
							printf("\nMode : ");
							scanf("%s",mode1);
							printf("\nPort : ");
							scanf("%s",port2);
							printf("\nDeskripsi : ");
							scanf("%s",desc2);
							printf("\nMode : ");
							scanf("%s",mode2);
							printf("Data Berhasil Ditulis, buka file result.txt di folder yg sama dengan program ini\n");
							system("pause");							
							fprintf(fp,"================================Result.txt================================\n");
							fprintf(fp,"system-view\nhostname %s\nvlan %s\ndescription %s\nquit\nvlan %s\ndescription %s\nquit\ninterface vlanif %s\nip address %s %s\nundo shutdown\nquit\nip route-static 0.0.0.0 0.0.0.0 %s\ninterface %s\ndescription %s\nport link-type %s\nport trunk allow-pass vlan %s %s\nquit\ninterface %s\ndescription %s\nport link-type %s\nport default vlan %s\nquit\naaa\nlocal-user j2m password cipher multimedia123\nlocal-user j2m privilege level 15\nlocal-user j2m service-type telnet\nauthentication-scheme default\nauthentication-mode hwtacacs local\nquit\nauthorization-scheme default\nauthorization-mode hwtacacs local\nauthorization-cmd 0 hwtacacs local\nauthorization-cmd 1 hwtacacs local\nauthorization-cmd 7 hwtacacs local\nauthorization-cmd 15 hwtacacs local\nquit\naccounting-scheme default\naccounting-mode hwtacacs\naccounting realtime 3\naccounting start-fail online\nquit\nquit\nuser-interface vty 0 4\nauthentication-mode aaa\nuser privilege level 15\nidle-timeout 30 0\nquit\ntelnet server enable\n",hostname,nms_vlan,nms_deskripsi,akses_vlan,akses_deskripsi,nms_vlan,address,subnet,gateway,port1,desc1,mode1,nms_vlan,akses_vlan,port2,desc2,mode2,akses_vlan);
							fprintf(fp,"================================Result.txt================================\n");
							fclose(fp);
							printf("\n\n");
							break;
						case 3:
							printf("hostname: ");
							scanf("%s",hostname);
							printf("\nNMS\n");
							printf("===============");
							printf("\nVlan : ");
							scanf("%s",nms_vlan);
							printf("\nDeskripsi : ");
							scanf("%s",nms_deskripsi);
							printf("\nVLAN akses\n");
							printf("================");
							printf("\n");
							printf("Vlan : ");
							scanf("%s",akses_vlan);
							printf("\nDeskripsi : ");
							scanf("%s",akses_deskripsi);
							printf("\nIp address : ");
							scanf("%s",address);
							printf("\nSubnet : ");
							scanf("%s",subnet);
							printf("\nIp Gateway : ");
							scanf("%s",gateway);
							printf("\nSwitching Mode\n");
							printf("=================\n");
							printf("Port : ");
							scanf("%s",port1);
							printf("\nDeskripsi : ");
							scanf("%s",desc1);
							printf("\nMode : ");
							scanf("%s",mode1);
							printf("\nPort : ");
							scanf("%s",port2);
							printf("\nDeskripsi : ");
							scanf("%s",desc2);
							printf("\nMode : ");
							scanf("%s",mode2);
							printf("\nLocation : ");
							scanf("%s",location);
							printf("device pop : ");
							scanf("%s",devicepop);
							printf("Data Berhasil Ditulis, buka file result.txt di folder yg sama dengan program ini\n");
							system("pause");
							printf("\n\n");
							fprintf(fp,"================================Result.txt================================\n");
							fprintf(fp,"Enable\nconf t\nhostname %s\nvlan %s\ndescription %s\nexit\nvlan %s\ndescription %s\nexit\ninterface vlan-interface %s\nip address %s %s\nno shutdown\nexit\nip route 0.0.0.0 0.0.0.0 %s\ninterface %s\ndescription %s\nswitchport mode %s\nswitchport trunk allowed vlan %s,%s\nspanning-tree bpdu-filter\nspanning-tree bpdu-guard\nno shutdown\nexit\ninterface %s\ndescription %s\nswitchport mode %s\nswitchport default vlan %s\nspanning-tree bpdu-filter\nspanning-tree bpdu-guard\nno shutdown\nexit\nusername j2m privilege 15 password 0 multimedia\ntacacs+ primary server 10.14.4.9 key iC0N-IPmpls+\ntacacs+ secondary server 10.14.4.18 key iC0N-IPmpls+\nclock timezone WIB 7 0\nsnmp-server contact\nadmin@iconpln.net.id\nsnmp-server location ICON+%s\nsnmp-server name %s\nsnmp-server community IPMPLS-ICON+ ro permit view iso\nsnmp-server host 10.14.3.12 version 1 IPMPLS-ICON+ udp-port 162 notify-type bridge gbn gbnsavecfg interfaces rmon snmp\nsnmp-server host 10.14.3.12 version 2c IPMPLS-ZYXEL udp-port 162 notify-type bridge gbn gbnsavecfg interfaces rmon snmp\nsntp client\nsntp client mode unicast\nsntp server 10.14.4.2\nsntp server backup 10.14.4.23\nlogging sequence-numbers\nlogging timestamps datetime\nlogging monitor 0\nlogging monitor 1\nlogging monitor 2\nlogging monitor 3\nlogging monitor 4\nlogging monitor 5\nlogging 10.14.4.4\nlogging 10.14.4.3\nlogging 10.14.4.15\nlogging 10.14.4.108\n",hostname,nms_vlan,nms_deskripsi,akses_vlan,akses_deskripsi,nms_vlan,address,subnet,gateway,port1,desc1,mode1,nms_vlan,akses_vlan,port2,desc2,mode2,akses_vlan,location,devicepop);
							fprintf(fp,"================================Result.txt================================\n");
							fclose(fp);
							break;
						case 4:
							printf("hostname: ");
							scanf("%s",hostname);
							printf("\nNMS\n");
							printf("===============");
							printf("\nVlan : ");
							scanf("%s",nms_vlan);
							printf("\nDeskripsi : ");
							scanf("%s",nms_deskripsi);
							printf("\nVLAN akses\n");
							printf("================");
							printf("\n");
							printf("Vlan : ");
							scanf("%s",akses_vlan);
							printf("\nDeskripsi : ");
							scanf("%s",akses_deskripsi);
							printf("\nIp address : ");
							scanf("%s",address);
							printf("\nSubnet : ");
							scanf("%s",subnet);
							printf("\nIp Gateway : ");
							scanf("%s",gateway);
							printf("\nSwitching Mode\n");
							printf("=================\n");
							printf("Port : ");
							scanf("%s",port1);
							printf("\nDeskripsi : ");
							scanf("%s",desc1);
							printf("\nMode : ");
							scanf("%s",mode1);
							printf("\nPort : ");
							scanf("%s",port2);
							printf("\nDeskripsi : ");
							scanf("%s",desc2);
							printf("\nMode : ");
							scanf("%s",mode2);
							printf("Domain : ");
							scanf("%s",domain);
							printf("Data Berhasil Ditulis, buka file result.txt di folder yg sama dengan program ini\n");
							system("pause");
							fprintf(fp,"================================Result.txt================================\n");
							fprintf(fp,"system-view\nsysname %s\ntelnet server enable\nundo ip http enable\npassword-recovery enable\ncwmp\nundo cwmp enable\nquit\nvlan %s\ndescription %s\nquit\nvlan %s\ndescription %s\nquit\ninterface Vlan-interface %s\ndescription %s\nip address %s %s\nundo shutdown\nquit\nip route-static 0.0.0.0 0.0.0.0 %s\nip route-static 10.14.3.0 255.255.255.0 %s\nip route-static 10.14.4.0 255.255.255.0 %s\ninterface %s\ndescription %s\nport link-type %s\nport trunk permit vlan %s,%s\ncombo enable fiber\ncombo enable copper\nundo shutdown\nquit\ninterface %s\ndescription %s\nport link-type %s\nport access vlan %s\nundo shutdown\nquit\nhwtacacs scheme %s\nprimary authentication 10.14.4.9\nsecondary authentication 10.14.4.18\nprimary authorization 10.14.4.9\nsecondary authorization 10.14.4.18\nprimary accounting 10.14.4.9\nsecondary accounting 10.14.4.18\nkey authentication iC0N-IPmpls+\nkey authorization iC0N-IPmpls+\nkey accounting iC0N-IPmpls+\nuser-name-format without-domain\nquit\ndomain DOMAIN-%s\nauthentication login hwtacacs-scheme %s\nauthorization login hwtacacs-scheme %s\naccounting login hwtacacs-scheme %s\naccess-limit disable\nstate active\nidle-cut disable \nself-service-url disable\ndomain system\naccess-limit disable\nstate active\nidle-cut disable\nself-service-url disable\nquit\nuser-group system\ngroup-attribute allow-guest\nquit\nlocal-user j2m\npassword cipher multimedia123\nauthorization-attribute level 3\nservice-type ssh telnet\nquit\nsnmp-agent\nsnmp-agent local-engineid 800007DB03688F8400BE7D\nsnmp-agent community write IPMPLS-ICON+ acl 2098\nsnmp-agent sys-info contact NOC ICON+ Gandul\nsnmp-agent sys-info location %s\nsnmp-agent sys-info version all\nsnmp-agent target-host trap address udp-domain 10.14.3.12 params securityname IPMPLS-ICON+\nntp-service unicast-server 10.14.4.2\nntp-service unicast-server 10.14.4.23\nuser-interface vty 0 4\nacl 2088 inbound\nauthentication-mode scheme\nuser privilege level 3\nquit\nuser-interface vty 5 15\nquit\ndomain default enable DOMAIN-%s\n",hostname,nms_vlan,nms_deskripsi,akses_vlan,akses_deskripsi,nms_vlan,nms_deskripsi,address,subnet,gateway,gateway,gateway,port1,desc1,mode1,nms_vlan,akses_vlan,port2,desc2,mode2,akses_vlan,domain,domain,domain,domain,domain,hostname,domain);
							fprintf(fp,"================================Result.txt================================\n");
							fclose(fp);							
							printf("\n\n");
							break;
						case 5:
							printf("hostname: ");
							scanf("%s",hostname);
							printf("\nNMS\n");
							printf("===============");
							printf("\nVlan : ");
							scanf("%s",nms_vlan);
							printf("\nDeskripsi : ");
							scanf("%s",nms_deskripsi);
							printf("\nVLAN akses\n");
							printf("================");
							printf("\n");
							printf("\nIp address : ");
							scanf("%s",address);
							printf("\nSubnet : ");
							scanf("%s",subnet);
							printf("\nIp Gateway : ");
							scanf("%s",gateway);
							printf("\nSwitching Mode\n");
							printf("=================\n");
							printf("Port : ");
							scanf("%s",port1);
							printf("\nDeskripsi : ");
							scanf("%s",desc1);
							printf("\nMode : ");
							scanf("%s",mode1);
							printf("Data Berhasil Ditulis, buka file result.txt di folder yg sama dengan program ini\n");
							system("pause");
							fprintf(fp,"================================Result.txt================================\n");
							fprintf(fp,"Enable\nconfig terminal\nhostname %s\nvlan %s\nname %s\nstate active\nend\nconfig terminal\ninterface vlan %s\nip address %s %s\nno shutdown\nexit\nip default-gateway %s\ninterface %s\ndescription %s\nmedia-type sfp\nswitchport mode %s\nswitchport trunk allowed vlan %s\nno shutdown\nexit\nusername j2m privilege 15 secret multimedia\nenable secret cisco\nline vty 0 4\nno access-class 23 in\ntransport input telnet\ntransport output telnet\nlogin local\nexit\nline console 0\nlogin local\n",hostname,nms_vlan,nms_deskripsi,nms_vlan,address,subnet,gateway,port1,desc1,mode1,nms_vlan);
							fprintf(fp,"================================Result.txt================================\n");
							fclose(fp);
							
							printf("\n\n");
							break;
							case 6:
							printf("hostname: ");
							scanf("%s",hostname);		
							printf("\nIp address : ");
							scanf("%s",address);
							printf("\nSubnet : ");
							scanf("%s",subnet);
							printf("\nSwitching Mode\n");
							printf("=================\n");
							printf("Port : ");
							scanf("%s",port1);
							printf("\nDeskripsi : ");
							scanf("%s",desc1);
							printf("Data Berhasil Ditulis, buka file result.txt di folder yg sama dengan program ini\n");
							system("pause");
							fprintf(fp,"================================Result.txt================================\n");
							fprintf(fp,"Enable\nconfig terminal\nhostname %s\ninterface %s\ndescription %s\nno switchport\nmtu 9000\nip address %s %s\nno shutdown\nexit\nusername j2m privilege 15 secret multimedia\nenable secret cisco\nline vty 0 4\nno access-class 23 in\ntransport input telnet\ntransport output telnet\nlogin local\nexit\nline console 0\nlogin local\nexit\n",hostname,port1,desc1,address,subnet);
							fprintf(fp,"================================Result.txt================================\n");
							fclose(fp);
							printf("\n\n");
								break;
							case 7:
							printf("hostname: ");
							scanf("%s",hostname);		
							printf("\nIp address : ");
							scanf("%s",address);
							printf("\nSubnet : ");
							scanf("%s",subnet);
							printf("\nSwitching Mode\n");
							printf("=================\n");
							printf("Port : ");
							scanf("%s",port1);
							printf("\nDeskripsi : ");
							scanf("%s",desc1);
							printf("Data Berhasil Ditulis, buka file result.txt di folder yg sama dengan program ini\n");
							system("pause");
							fprintf(fp,"================================Result.txt================================\n");
							fprintf(fp,"Enable\nconfig terminal\nhostname %s\ninterface %s\ndescription %s\nno switchport\nmtu 9000\nip address %s %s\nno shutdown\nexit\nusername j2m privilege 15 secret multimedia\nenable secret cisco\nline vty 0 4\nno access-class 23 in\ntransport input telnet\ntransport output telnet\nlogin local\nexit\nline console 0\nlogin local\nexit\n",hostname,port1,desc1,address,subnet);
							fprintf(fp,"================================Result.txt================================\n");
							fclose(fp);
							printf("\n\n");
								break;
					}
				break;	
				}while(Switch!=8);
		}
	}while(menu!=3);
	
	return 0;
}
