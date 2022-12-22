                   //SET RELATED


//set er vitor akta pair
  set<pair<ll,ll>>st;
    f(i,n)
    {
        cin>>x>>y;
        st.insert({x,y});
    }
//set er vitor duita pair
set<pair<pair<ll,ll>,pair<ll,ll>>> st;
ll x=0,y=0;
		ll t=0;
		for(char i:s){
			ll fx=x,fy=y;
			if(i=='N') y++;
			else if(i=='S') y--;
			else if(i=='E') x++;
			else x--;
			if(st.find({{fx,fy},{x,y}})!=st.end()||st.find({{x,y},{fx,fy}})!=st.end()) t+=1;
			else t+=5;
			st.insert({{fx,fy},{x,y}});
		}


                 // MAP RELATED
   

    //map er vitor duita pair
     map<pair<pair<int,int>,pair<int,int> >,bool> pr;
        string s;
        cin>>s;
        for(i=0;i<s.length();i++){
            if(s[i]=='E') x++;
            if(s[i]=='W') x--;
            if(s[i]=='N') y++;
            if(s[i]=='S') y--;
            if(pr[{{x,y},{a,b}}]){
                ans++;
            }
            else ans+=5,pr[{{x,y},{a,b}}]=1,pr[{{a,b},{x,y}}]=1;
