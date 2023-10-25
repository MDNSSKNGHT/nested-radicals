#!/usr/bin/env sh

main()
{
	cc nested-radicals.c \
		-lm -o nested-radicals
	#./nested-radicals 3 2
}

main "$@"

