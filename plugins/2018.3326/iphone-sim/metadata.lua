local metadata =
{
	plugin =
	{
		format = 'staticLibrary',
		staticLibs = {  "OguryPresageAdapter", "objc", "z", "c++" },
		frameworks = { "OMSDK_Ogury", "OgurySdk", "OguryCore", "OguryAds", "OguryChoiceManager" , "AdSupport", "SystemConfiguration", "CoreTelephony" },
		frameworksOptional = {},
		usesSwift = true,
	},
}

return metadata
