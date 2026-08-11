# @penosext/miniapp-package-name

这是 Miniapp 原生包模板。创建具体包仓库后，请修改以下内容：

- `package.json` 的 `name`，必须使用 `@penosext/miniapp-<name>`；
- `miniapp.package.json` 的 `module`、`contract`、`native.exports` 和依赖包名；
- `contract/example.tsp`、`native/cpp/CMakeLists.txt` 和 `native/cpp/src/ExampleService.*`；
- README 中的包名、API 和权限说明。

包仓库应保持 `private: true` 和 `license: UNLICENSED`。推送到 `main` 后，GitHub Actions 会生成绑定代码，并在 GitHub Packages 中发布当前版本；已发布的相同版本会自动跳过。发布使用仓库自带的 `GITHUB_TOKEN`，不需要在源码中保存令牌。

本地开发时：

```bash
pnpm install
pnpm generate
miniapp package add @penosext/miniapp-package-name --local /path/to/this-package
```
