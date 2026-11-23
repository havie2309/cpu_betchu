CC := clang
CFLAGS := -g -Wall -Werror -Wno-unused-function -Wno-unused-variable

SRCS := main.c bots.c cal.c engine.c persist.c scheduler.c ui.c
HDRS := bots.h cal.h engine.h persist.h scheduler.h ui.h utils.h

all: betchu

clean:
	rm -f betchu

betchu: $(SRCS) $(HDRS)
	$(CC) $(CFLAGS) -o betchu $(SRCS) -lform -lncurses -lpthread -lm

zip:
	@echo "Generating betchu.zip file to submit to Gradescope..."
	@zip -q -r betchu.zip . -x .git/\* .vscode/\* .clang-format .gitignore betchu
	@echo "Done. Please upload betchu.zip to Gradescope."