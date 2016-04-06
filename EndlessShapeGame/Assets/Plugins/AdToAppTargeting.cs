namespace AdToApp 
{
	public static class AdToAppTargeting
	{
		/**
		 * Targeting metadata keys
		 */
		public const string KEYWORDS = "keywords";              /** application keywords. A free form set of keywords, separated by ',' e.g: @"sports,cars,bikes" */
		public const string USER_INTERESTS = "interests";       /** user's interests param. A free form set of interests, separated by ',' */
		public const string USER_AGE = "age";                   /** user's age param, e.g: @"25" */
		public const string USER_GENDER = "gender";             /** user's gender param */
		public const string USER_BIRTHDAY = "birthday";         /** user's birthday param. Value should be in format dd.MM.yyyy, e.g: "01.01.2000" */
		public const string USER_OCCUPATION = "occupation";     /** user's occupation param */
		public const string USER_RELATIONSHIP = "relationship"; /** user's relationship param */
		public const string USER_LATITUDE = "latitude";         /** user's current latitude param */
		public const string USER_LONGITUDE = "longitude";       /** user's current longitude param */

		/**
		 * Targeting metadata values (for pre-defined values)
		 */
		public const string USER_GENDER_MALE = "male";   /** User is male */
		public const string USER_GENDER_FEMALE = "female"; /** User is female */

		public const string USER_OCCUPATION_SCHOOL = "school";     /** User goes to school */
		public const string USER_OCCUPATION_UNIVERSITY = "university"; /** User at university */
		public const string USER_OCCUPATION_WORK = "work";       /** User is working */

		public const string USER_RELATIONSHIP_SINGLE = "single";   /** User is single */
		public const string USER_RELATIONSHIP_ENGAGED = "engaged";  /** User is engaged */
		public const string USER_RELATIONSHIP_MARRIED = "married";  /** User is married */
		public const string USER_RELATIONSHIP_DIVORCED = "divorced"; /** User is divorced */
	};
}