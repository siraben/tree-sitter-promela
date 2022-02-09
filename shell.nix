{ pkgs ? import <nixpkgs> {}}:
with pkgs;

mkShell {
  packages = [ tree-sitter ];
}
