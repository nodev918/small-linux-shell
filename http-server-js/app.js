const express = require("express");
const app = express();
const PORT = 3333;

app.get("/", (req, res) => {
  console.log("get request");
  res.send("hello");
});

app.listen(PORT, () => {
  console.log(`listening: ${PORT}`);
});
