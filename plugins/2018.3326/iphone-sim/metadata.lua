local metadata =
{
	plugin =
	{
		format = 'staticLibrary',
		staticLibs = {  "objc", "z", "c++" },
		frameworks = {"AppLovinMediationOguryPresageAdapter" , "OgurySdk" , "AdSupport", "SystemConfiguration", "CoreTelephony" },
		frameworksOptional = {},
		usesSwift = true,
	},
}

return metadata
