# C-ProblemSet

Created git problem while connecting this repo:
1. I faced this: `PS F:\C-ProblemSets> git pull origin main`
`From https://github.com/nisat-gg/C-ProblemSet`
 `* branch            main       -> FETCH_HEAD
fatal: refusing to merge unrelated histories`

This happens when the two repositories were initialized separately, and Git does not recognize them as having a common base. To resolve this, you can use the `--allow-unrelated-histories flag`: `git pull origin main --allow-unrelated-histories`
