let company = {
  Name: "Apple",
  FoundationYear: 1999,
  ProductList: [
    { Name: "IPhone", Year: 2007 },
    { Name: "IPaid", Year: 2010 },
  ],
  ceo: "Steve jobs",
  FoundedBy: ["Steve jobs", "Mark Jokerburg"],
  createproduct: function (product) {
    company.ProductList.push(product);
  },

  resignceo: function () {
    let str = company.ceo;
    company.ceo = null;
    return str;
  },
  heirceo: function (name) {
    company.ceo = name;
    return name;
  },
  toString: function () {
    let str = "";
    for (p of company.ProductList) {
      str = `${str + p.Name + "-" + p.Year + ","}`;
    }

    return `
        <strong>Name: </strong>${company.Name} <br\>
        <strong>Foundation Year: </strong> ${company.FoundationYear} <br\> 
        <strong>FoundedBy: </strong> ${company.FoundedBy.join(",")} <br\>
        <strong>ProductList: </strong> ${str} <br\>

        `;
  },
};
document.write(
  "<br><br>  <b> Here the following details about company </b> <br>"
);
document.write(company);
document.write("<b>Resign CEO:</b> " + company.resignceo() + " Resigned");
document.write(" <br><br> <b>After Resign CEO Company details</b> <br>");
document.write(company);
document.write("  <b>After Resign CEO Company details</b> <br>");
document.write("<b>CEO: </b>" + company.ceo);
document.write("<br/><br/><b>After Join New CEO Company Details</b>");
document.write(company);
document.write("<b>CEO :</b>" + company.heirceo("Aarif") + "<br><br>");
company.createproduct({ Name: "Andorid", Year: 2014 });

document.write(company);
