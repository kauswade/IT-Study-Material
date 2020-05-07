<?xml version="1.0"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<body>
	<h3>Kaustubh Wade(160410116050)</h3>
	<table border="2">
	<tr>
		<th>Title</th>
		<th>Author</th>
	</tr>
	<xsl:for-each select="lib/book">
	<tr>
		<td><xsl:value-of select="title" /></td>
		<td><xsl:value-of select="author" /></td>
	</tr>
	</xsl:for-each>	
	</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>	
