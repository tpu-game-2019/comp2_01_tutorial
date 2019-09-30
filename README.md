# チュートリアル

# 進め方
## はじめてのとき
* [GitHub](https://github.com/)のアカウントを作成してください
* [Travis CI](https://travis-ci.org/) のアカウントを作成してください
* GitHubのアカウントを[こちらのフォーム](https://forms.gle/k5zoXyy4yAWNPz4KA)から教えてください。
## 毎回の進め方
* このリポジトリをforkしてください
* Travis CI を設定して、自動ビルドが通るようにしてください
   * Travis CI のGitHubアカウントでの登録とforkしたリポジトリをTravisCI側で許可する
   * 参考サイト：[Travis CIで自動テストして、結果をGitHubのトップページに表示する](https://qiita.com/hoshimado/items/4090d8e64beb8a7f95e1)
* forkしたリポジトリの README.md ファイルの「t-kougei-game-comp-2019」の部分を自分のGitHubアカウント名に差し替えてください(2箇所)
* 問題を解いて、テストを通るようにしてください。
* fork 元の master ブランチにプルリクエストを投げてください

# テスト結果

[![Build Status](https://travis-ci.com//01_tutorial.svg?branch=master)](https://travis-ci.com//01_tutorial)

# 今回の問題

環境に慣れるための課題です。

入力される文字列を出力してください。

Travis CI では、プロジェクトにある　input?.txt ファイルを読み込んで、output?.txt ファイルと同じ結果が出力されるかテストをします。

main.c ファイルだけを書き換えて下さい。

## 入力される値
入力は以下のフォーマットで与えられます。
~~~
str
~~~
* str: 入力される文字列

## 期待する出力

入力された文字列を出力します。

最後は改行し、余計な文字、空行を含んではいけません。

## 条件

* 入力される文字列は一行
* 入力される文字数は改行を含めて256文字以内

## 入力例1
~~~
Hello world!
~~~

## 出力例1
~~~
Hello world!
~~~

## 入力例2
~~~
This is a pen.
~~~

## 出力例1
~~~
This is a pen.
~~~
 
