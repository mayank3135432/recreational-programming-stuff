from rivescript import RiveScript

bot = RiveScript();
bot.load_directory(".");
bot.sort_replies()

while True:
    msg=input('You> ');
    if msg=='/quit':
        quit()
    reply=bot.reply("ateium",msg);
    print('Bot> ',reply);

