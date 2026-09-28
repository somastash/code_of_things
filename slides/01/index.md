---
marp: true
paginate: true
theme: press
---

<!-- _class: cover -->

<h1 class="logo"><b>CODE</b>_OF_THINGS</h1>
<p class="title">コード・オブ・シングス :: コードでモノを動かす</p>
<p class="author">&copy; 2026 Satoshi Soma</p>

---

<!-- _class: small -->

## 電気ケトルはなぜ動く

<div class="cols c23 gap">
<figure>
<img src="../.assets/kettle.png">
</figure>
<div>

### サーモスタット式の場合
サーモスタットの中には、熱によって曲がる**バイメタル**が入っている。
バイメタルは熱膨張率の異なる二枚の金属板を貼り合わせた部品で、*温度が上がるにつれて曲がる*。
一定温度に達すると、その動きで電気接点を開いてヒーターへの電流を切る。
電気ケトルで実際に使われる機械式サーモスタットはこの原理によるものが一般的。

<small class="note">参考: [バイメタルのはたらき 4 年生理科](https://www.youtube.com/watch?v=Hsczg5z_Yyg&t=29s)</small>

</div>
</div>

---

<div class="cols c23 gap">
<figure>
<video controls="controls">
  <source src="../.assets/kettle.mov">
</video>
<figcaption>タッチパネルで温度を指定できるタイプ</figcaption>
</figure>
<div>

### 温度調節式の場合
- ユーザーが指定した温度に達するとヒーターが止まる。
  - ➔ 現在の温度を計る**センサー**が必要。
- 温度を指定するためのボタンやタッチパネルなどの UI も備える。
  - ➔ 現在の状態を示すためのランプやディスプレイなどの表示器が必要。

</div>
</div>

---

### 
