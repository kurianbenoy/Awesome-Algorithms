var bordersize;
var err=0;
bordersize = prompt("Select a table border size:" +
					"0 ," +
					"1 ," +
					"4 ," +
					"8 ," );

switch(bordersize) {

  case "0":document.write("<table>");
		   break;
  case "1":document.write("<table border = '4'>");
		   break;
  case "4": document.write("<table border ='4'>");
			break;
  case "8": document.write("<table border = '8'>");
			break;

  default: {
			document.write("Error - invalid choice:",bordersize,"<br/>");
			err = 1;
			}
}

If (err == 0) {
  document.write("<caption> 2010 </caption>");
  document.write("<tr>");
}
