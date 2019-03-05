int getMostWork( vector  folders, int workers ) {
   int n = folders.size();
   int lo = *max_element( folders.begin(), folders.end() );
   int hi = accumulate( folders.begin(), folders.end(), 0 );

   while ( lo &lt; hi ) {
      int x = lo + (hi-lo)/2;

      int required = 1, current_load = 0;
      for ( int i=0; i&lt;n; ++i ) {
         if ( current_load + folders[i] &lt;= x ) {
            // the current worker can handle it
            current_load += folders[i];
         }
         else {
            // assign next worker
            ++required;
            current_load = folders[i];               
         }
      }

      if ( required &lt;= workers )
         hi = x;
      else
         lo = x+1;
   }

   return lo;
}
