function [y] =p(x1,y1,x2,y2)
x=min(x1,x2):1:max(x1,x2);
h1=x2-x1;
h2=y2-y1;
y=(h2*x-h2*x1+h1*y1)/h1;
plot(x,y);
endfunction

function []=myfct(a,b,d)
plotframe([-10,-10,10,10]); //для определения текущего масштаба
xrect(0,0,a,b) //построение квадрата
p(0,0,a,-b);
p(0,-b,a,0)
endfunction
