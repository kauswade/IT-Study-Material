<?xml version="1.0"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
	<html>
	<body>
		<h1>Kaustubh Wade(160410116050)</h1>
		<h2>Book Library</h2>
		<xsl:apply-templates/>
	</body>
	</html>
</xsl:template>

<xsl:template match="book">
	<p>
	<xsl:apply-templates select="title" />
	<xsl:apply-templates select="author" />
	<xsl:apply-templates select="price" />
	</p>
</xsl:template>

<xsl:template match="title">
	Title:<span style="color:red">
	<xsl:value-of select="."/></span>
	<br />
</xsl:template>

<xsl:template match="author">
	Author:<span style="color:blue">
	<xsl:value-of select="."/></span>
	<br />
</xsl:template>

<xsl:template match="price">
	Price:<span style="color:cyan">
	<xsl:value-of select="."/></span>
	<br />
</xsl:template>
</xsl:stylesheet>