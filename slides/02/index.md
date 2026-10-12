---
marp: true
paginate: true
theme: press
---

<!-- _class: cover -->

<h1 class="logo"><b>CODE</b>_OF_THINGS #2</h1>
<p class="title">コード・オブ・シングス :: コードでモノを動かす #2</p>
<p class="author">&copy; 2026 Satoshi Soma</p>

---

# 入力の処理

---

<!-- _class: small -->

<div class="cols c23 gap">
<div>
<figure>
<img src="../.assets/microwave.png">
</figure>
</div>
<div>

一般的に、電子機器は何らかの**入力インターフェース**を備えていることが多い。例えば電子レンジなら:

- 温めをスタートするボタン
- 温めを停止するボタン
- 温め時間や温度を設定するボタン、またはダイヤル

などを備えている。
ユーザーはこれらのインターフェースへの入力を介して機器に自分の*意図*を伝える。

</div>
</div>

---

これに対し機器側が行うべきことは、大まかに言うと以下の 3 点である。

1. 入力を**検知**する
2. 入力された情報を**処理**する
3. 入力に対して期待される**出力**を返す


