<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
  <xsl:output method="html" indent="yes"/>

  <xsl:template match="/">
    <table>
      <thead>
        <tr>
          <th>ID</th>
          <th>First Name</th>
          <th>Last Name</th>
          <th>Date of Birth</th>
          <th>Gender</th>
          <th>Position</th>
          <th>Salary</th>
          <th>Email</th>
          <th>Phone Number</th>
        </tr>
      </thead>
      <tbody>
        <xsl:apply-templates select="//employee"/>
      </tbody>
    </table>
  </xsl:template>

  <xsl:template match="//employee">
    <tr>
      <td><xsl:value-of select="@id"/></td>
      <td><xsl:value-of select="personalinfo/firstname"/></td>
      <td><xsl:value-of select="personalinfo/lastname"/></td>
      <td><xsl:value-of select="personalinfo/dateofbirth"/></td>
      <td><xsl:value-of select="personalinfo/gender"/></td>
      <td><xsl:value-of select="empinfo/position"/></td>
      <td><xsl:value-of select="empinfo/salary"/></td>
      <td><xsl:value-of select="contact/email"/></td>
      <td><xsl:value-of select="contact/phonenumber"/></td>
    </tr>
  </xsl:template>

</xsl:stylesheet>