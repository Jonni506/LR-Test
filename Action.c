Action()
{
//	hola
	

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("OGPC=19008559-5:; DOMAIN=www.google.com");

	web_add_cookie("NID=152=o1GnTRPhcbvB8kT9lMC-oW-Gvi_7_gni9CGL8vZIYMBoEWxyBr9kK8NCOIPuW5_FtdJIIjrmpZ1GmDQc5RxlxV9gUXGpDQLFH7OTKslj6qW2laK6gQ8lIfNezUUBHYYnSthzvNFbMl-vvldoy0yU8buFATnrv5W08Qscm4tnvyc; DOMAIN=www.google.com");

	web_add_cookie("DV=EwBVD1Ostx4VsLwFPdwP7UQHTeAMfhY; DOMAIN=www.google.com");

	web_url("www.google.com", 
		"URL=http://www.google.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google.com/images/nav_logo242.png", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.google.com/xjs/_/js/k=xjs.s.en.o7-j2t2yx9g.O/m=sx,Fkg7bd,HcFEGb,IvlUe,MC8mtf,OF7gzc,RMhBfe,T4BAC,TJw5qb,TbaHGc,Y33vzc,cdos,cr,hsm,iDPoPb,jsa,mvYTse,tg8oTe,uz938c,vWNDde,ws9Tlc,xpltpb,yQ43ff,d,csi/am=DAAWYf4ByP8pAJAAEIAKbLBABolBJQ/rt=j/d=1/dg=2/rs=ACT90oF49LUbB2T2Rts0ABdPq-kYfMHJrw", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		LAST);

	web_url("gen_204", 
		"URL=https://www.google.com/gen_204?s=webhp&t=aft&atyp=csi&ei=zfkgXJD2ApSSjwSFn6TACQ&rt=wsrt.883,aft.1326,prt.178", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/?gws_rd=ssl", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("gen_204_2", 
		"URL=https://www.google.com/gen_204?atyp=csi&ei=zfkgXJD2ApSSjwSFn6TACQ&s=jsa&jsi=s,t.0,et.focus,n.iDPoPb,cn.1&zx=1545664976266", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/?gws_rd=ssl", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/xjs/_/js/k=xjs.s.en.o7-j2t2yx9g.O/am=DAAWYf4ByP8pAJAAEIAKbLBABolBJQ/rt=j/d=1/exm=sx,Fkg7bd,HcFEGb,IvlUe,MC8mtf,OF7gzc,RMhBfe,T4BAC,TJw5qb,TbaHGc,Y33vzc,cdos,cr,hsm,iDPoPb,jsa,mvYTse,tg8oTe,uz938c,vWNDde,ws9Tlc,xpltpb,yQ43ff,d,csi/ed=1/dg=2/rs=ACT90oF49LUbB2T2Rts0ABdPq-kYfMHJrw/m=sb_wiz,aa,abd,async,dvl,foot,ipv6,lu,m,mu,sf,xz7cCd,WgDvvc?xjs=s1", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=https://ssl.gstatic.com/gb/images/i1_1967ca6a.png", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.gstatic.com/og/_/js/k=og.og2.en_US.ATZQdPfr-RM.O/rt=j/m=def/exm=in,fot/d=1/ed=1/rs=AA2YrTv-X7m9A6GmnfpSsKdPIfvIYg06ZQ", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		LAST);

	return 0;
}