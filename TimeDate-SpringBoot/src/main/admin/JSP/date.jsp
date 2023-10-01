<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@page import="java.util.*" %>
<%@page import="java.text.*" %>
<!DOCTYPE html>
<html>
<head>
<title>Date</title>
</head>
<body align = "center" bgcolor="yellow">
<h1>Current Date</h1>

<%
// Get the current date and time
Date now = new Date();

// Format the date and time
SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");
String formattedDate = sdf.format(now);
%>

<p>The current date and time is: <strong><%= formattedDate %></strong></p>
</body>
</html>
