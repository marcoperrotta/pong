package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/arrowDown.png", "assets/arrowDown.png");
			type.set ("assets/arrowDown.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/arrowUp.png", "assets/arrowUp.png");
			type.set ("assets/arrowUp.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/font/Roboto-Thin.ttf", "assets/font/Roboto-Thin.ttf");
			type.set ("assets/font/Roboto-Thin.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/img/arrowDown.png", "assets/img/arrowDown.png");
			type.set ("assets/img/arrowDown.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/arrowUp.png", "assets/img/arrowUp.png");
			type.set ("assets/img/arrowUp.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Roboto-Thin.ttf", "assets/Roboto-Thin.ttf");
			type.set ("assets/Roboto-Thin.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
