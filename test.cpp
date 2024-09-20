#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
// #include <conio.h>
using namespace std;
//global variable
vector<vector<string>>vector_of_set ;
void WAT_Print(char set[80][15], int time){
	for (int i = 0; i < 60; i++)
	{
		system("cls");
		Beep(1000, 100);
		cout<<set[i]<<endl;
		Sleep(time*1000);
	}
	
}

int main()
{
	cout<<"Welcome to WAT practice sessoin "<<endl
		<<"we have 8 set of WAT"<<endl
		<<"please enter 0,1,2,3,4,5,6,7 for desire set"<<endl;
	int set,time;
	cin>>set;
	cout<<endl<<"please enter time for each word (generally 10 seconds)"<<endl;
	cin>>time;

	char set_01 [80][15]={"Dew","Worse","Nature","Country","Darling","Knife","Anger","Party","Children","Bag","Failure","Rain","Bold","Aloof","Pistol","Regular","Warm","God","Naughty","Confuse","Fun","Society","Hard","Plan","Slave","Doctor","Sea","Climb","Machine","Music","Flag","Dream","Habit","Careless","Song","Duty","Dacoit","Beautiful","Stick","Study","Wise","Surplus","Discipline","Clerk","Respect","Father","Embrace","Gun","Freedom","Glad","Ship","Hate","Bring","Coup","Cycle","Air","Loose","Sore","Power","Hunting","Life","Tea","Officers","Advance","Alert","Hell","Fear","Observe","Smart","Laugh","Soap","Land","Danger","Soul","Democracy","Drive","Deep","Company","Sacrifice","Whim"};
	char set_02 [80][15]={"Confidence","Liberty","Blue-print","Risk","Impossible","Problem","Grief","Injured","Good","Rifle","Enjoy","Neglect","Precaution","Carbon","Behaviour","Dislike","Rest","Club","Lead","Defeat","Sex","Liar","Fine","Courage","Wear","Victim","Spoil","Nation","Down","Mother","Girl","Fall","Education","Water","Blade","Male","War","Follow","Mind","Late","Secret","Stone","Money","Crush","Rose","Morning","Sleep","Game","Hear","Travel","Figure","Spider","Sincere","Senior","Efficiency","Bullet","Lonely","Agile","Equal","Request","Assembly","Field","Week","Miss","Strike","Dawn","Success","Gentle","Need","Cry","Push","Task","Quarreling","Keen","Rumor","Crazy","Challenge","Zero","Joy","Pale",};
	char set_03 [80][15]={"Society","Spade","Designation","President","Blow","Check","Alarm","Corruption","Newspaper","Sorrow","Death","Judge","Novel","Bitter","Pious","Favour","Love","Pull","Fool","Lesson","Fight","Shoe","Waster","Dear","Brave","Action","Annoy","Honesty","Slave","Native","Refuse","Law","Tough","Grass","Crowd","Peace","Lip","Police","Hug","Agony","Rebel","Supreme","Hurt","Culprit","Kick","Boast","Question","Harbour","Arrange","Assure","Past","Attempt","Award","Affection","Heaven","Admire","Hold","Gift","Lady","Win","Race","Lie","Honest","Escape","Slap","Youth","Spring","Colour","Conquer","Absorption","Fair","Mix","Arm","Slow","Dummy","Suicide","Advantage","Difficult","Adopt","Morality",};
	char set_04 [80][15]={"Manner","Jump","Cruel","Old","Holiday","Co-operation","Battle","Dignity","Hit","Enemity","Revenge","Control","Lack","Duel","Adversity","Woman","Obscure","Strict","Audience","Act","Award","Objection","Excite","Busy","Bluff","Revolt","Sign","Orphan","Obedient","Wind","Season","Reaction","Beard","Comfort","Weep","Cute","Pain","Wrong","Children","Careful","Prepare","Disagree","Design","Winter","Master","Custom","Patience","Boat","Take","Sports","Future","Coal","Source","Height","Drought","Insurance","Real","Choice","Tiger","Buy","World","Climate","Head","Road","Drain","Legend","Leopard","Start","End","Motivated","Valuable","Moon","Find","Change","Fault","Gem","Cut","System","Talk","Pill",};
	char set_05 [80][15]={"Actual","Religion","Key","Close","Sense","Same","Urgent","Logic","Responsible","Attentive","Depend","Defend","Health","Milk","Give","Protect","Poverty","Birthday","Guilty","Imitative","Vanity","Greed","Attack","Justice","Arrest","Allow","Conduct","Damage","Nervous","Antique","Performance","Disturb","Assume","Reveal","Dark","Criticize","Tackle","Sympathy","Important","Truthful","Mistake","Lady","Advise","Genuine","Trust","Misfortune","Compel","Immediate","Pounce","Overcome","Hesitate","Allot","Prejudice","Wait","Build","Lust","Blast","Puzzle","Make","Luck","Reform","Beware","Body","Camel","Captain","Catch","Cheap","Citizen","Clock","Iron","Finish","Essential","Fire","Fruit","Glory","Humble","Heavy","Penalty","mix","Whim",};
	char set_06 [80][15]={"Help","Journey","Leisure","Ideal","Infant","Policy","Idle","Opportunity","Punctual","Routine","Temple","Tutor","Right","Rope","Science","Short","Silent","Stranger","Struggle","Swim","Swim","Jealous","Victory","Vegetable","Valour","Ugly","Warrior","Wish","Agree","Attentive","Alternative","Famine","Issue","Same","Knock","Achieve","Reveal","Ignore","Courier","Curiosity","Save","Bridge","Virgin","Zeal","Alive","Whisky","Punishment","End","Lazy","Famous","Cinema","Blood","Ghost","Quality","Hope","Goal","Rural","Box","Clash","Move","Delight","City","Guard","Sharp","Killer","Complain","Trench","Leader","Great","Stone","Penalty","Sweet","Worry","Faith","Unity","Kiss","Milk","Horse","Politics",};
	char set_07 [80][15]={"Bridge","Virgin","Zeal","Alive","WHISKY","PUNISHMENT","END","LAZY","FAMOUS","BLOOD","GHOST","QUALITY","HOPE","GOAL","RURAL","BOX","CLASH","CERATE","MOVE","DELIGHT","CITY","GUARD","PARK","SHARP","KILLER","COPLAIN","TRENCH","LEADER","GREAT","STONE","PENALTY","SWEET","WORRY","FAITH","UNITY","KISS","MILK","HORSE","POITICS","DEW","WORSE","NATURE","COUNTRY","DARLING","DARLING","KNIFE","ANGER","PARTY","CHILDREN","BAG","FAILURE","RAIN","BOLD","ALOOFPISTOL","REGULAR","WARM","GOD","NAUGHTY","CONFUSE","FUN","SOCIETY","HARD","PLAN","SLAVE","DOCTOR","SEA","CLIMB","MACHINE","MUSIC","FLAG","DREAM","HABIT","CARELESS","SONG","DUTY","DACOIT","BEAUTIFUL","DEAD","STICK","RUMOR",};
	char set_08 [80][15]={"STUDY","WISE","SURPLUS","DISCIPLINE","CLERK","RESPECT","FEATHER","EMBRACE","GUN","FEEDOM","GLAD","SHIP","HATE","BRING","COUP","CYCLE","AIR","LOOSE","SORE","POWER","HUNTING","LIFE","TEA","OFFICER","ADVANCE","ALERT","HELL","FEAR","OBSERVE","SMART","LAUGH","SOAOP","LAND","DANGER","SOUL","DEMOCRACY","DRIVE","DEEP","COMPANY","SACRIFICE","WHIM","CONFIDENCE","LIBERTY","BLUE-PRINT","RISK","IMPOSSIBLE","PROBLEM","GRIEF","INJURED","GOOD","RIFLE","ENJOY","NEGLECT","PRECAUTION","CARBON","BEHAVIOUR","DISLIKE","REST","CLUB","LEAD","DEFEAT","SEX","EVENING","LIAR","FINE","COURAGE","WEAR","VICTIM","SPOIL","NATION","DOWN","MOTHER","GRIL","FALL","EDUCATOIN","WATER","BLADE","MALE","WAR","FOLLOW",};
	switch (set)
	{
	case 0:
		WAT_Print(set_01, time);
		break;
	case 1:
		WAT_Print(set_02, time);
		break;
	case 2:
		WAT_Print(set_03, time);
		break;
	case 3:
		WAT_Print(set_04, time);
		break;
	case 4:
		WAT_Print(set_05, time);
		break;
	case 5:
		WAT_Print(set_06, time);
		break;
	case 6:
		WAT_Print(set_07, time);
		break;
	case 7:
		WAT_Print(set_08, time);
		break;
	
	default:
		cout<<endl<<"please enter a Valid number"<<endl;
		break;
	}
	
	return 0;


}
