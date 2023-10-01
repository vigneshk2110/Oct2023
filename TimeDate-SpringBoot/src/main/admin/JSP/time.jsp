<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@page import="java.util.*" %>
<%@page import="java.text.*" %>
<!DOCTYPE html>
<html>
<head>
<title>Time</title>
</head>
<body align = "center" bgcolor="red" >
<h1>Current Time</h1>

<%
// Get the current date and time
Date now = new Date();

// Format the date and time
SimpleDateFormat sdf1 = new SimpleDateFormat("HH:mm:ss");
String formattedTime = sdf1.format(now);
%>

<p>The current time is: <strong><%= formattedTime %></strong></p>
</body>
</html>
