


int getRecommendation(char gender, float height, float weight)
{
    char p = gender;
    char m_men = 'm';                        // ïåðåìåííàÿ ïðèñâàèâàåò çíà÷åíèå 'ì'
    char w_men = 'w';                        //ïåðåìåííàÿ ïðèñâàèâàåò çíà÷åíèå 'w'
    int optimal_weight = 0;                  // ïåðåìåííàÿ èäåàëüíîãî âåñà
    

    if (p == m_men)                         //îïåðàòîð âûáîðà óñëîâèÿ ïåðåìåííîé char p = 'ì'
    {
        optimal_weight = height - 100;

        if (optimal_weight < weight)        //ñðàâíåíèå îïòèìàëüíîãî âåñà ñ ïîëó÷åííûìè äàííûìè îò ïîëüçîâàòåëÿ è âûâîä çíà÷åíèÿ (-1,0,1)
            return 1;
        else if (optimal_weight > weight)
            return -1;
        else if (optimal_weight == weight)
            return 0;
    }
    else if (p == w_men)                    //îïåðàòîð âûáîðà óñëîâèÿ ïåðåìåííîé char p = 'w'
    {
        optimal_weight = height - 110;

        if (optimal_weight < weight)      //ñðàâíåíèå îïòèìàëüíîãî âåñà ñ ïîëó÷åííûìè äàííûìè îò ïîëüçîâàòåëÿ è âûâîä çíà÷åíèÿ (-1,0,1)
            return 1;
        else if (optimal_weight > weight)
            return -1;
        else if (optimal_weight == weight)
            return 0;
    }

  
}

   
  
