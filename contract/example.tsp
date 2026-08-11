namespace Miniapp.Example;

model Request {
  value: string;
}

model Response {
  value: string;
}

@miniapp.module("example")
interface Example {
  @miniapp.sync
  echo(input: Request): Response;
}
