BRT has detected 857 problem(s). For more info run: abrt-cli list
[mvenkaw3@il3dldocksbx201 ~]$ sudo su -
Last login: Wed Apr 26 09:28:59 CDT 2023 on pts/0
[root@il3dldocksbx201 ~]# docker service ls
Error response from daemon: This node is not a swarm manager. Worker nodes can't be used to view or modify clusteo a manager.
[root@il3dldocksbx201 ~]# docker ps | grep nginx
7c39b18615f5   018aec2b4f30                                   "/docker-entrypoint.…"   18 minutes ago   Up 18 min                                                                         k8s_nginx_nginx-deployment-5d84b66846-c8
1b58f89a19cc   84581e99d807                                   "nginx -g 'daemon of…"   18 minutes ago   Up 18 min                                                                         k8s_nginxcon_deploy-nginx-6c48977585-6mw
c4cf4c1ccd2a   84581e99d807                                   "
