static const uint8_t Default_fs_essl[262] =
{
	0x46, 0x53, 0x48, 0x0b, 0xe3, 0xc2, 0x5c, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf3, 0x00, // FSH....e........
	0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // ..varying highp 
	0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x76, // vec3 v_normal;.v
	0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // oid main ().{.  
	0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, // highp float tmpv
	0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // ar_1;.  tmpvar_1
	0x20, 0x3d, 0x20, 0x28, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6e, //  = ((dot (.    n
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // ormalize(v_norma
	0x6c, 0x29, 0x0a, 0x20, 0x20, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2e, 0x38, 0x31, // l).  , vec3(0.81
	0x33, 0x37, 0x33, 0x33, 0x35, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x36, 0x34, 0x39, 0x39, 0x30, 0x36, // 37335, 0.4649906
	0x2c, 0x20, 0x30, 0x2e, 0x33, 0x34, 0x38, 0x37, 0x34, 0x32, 0x39, 0x29, 0x29, 0x20, 0x2a, 0x20, // , 0.3487429)) * 
	0x30, 0x2e, 0x35, 0x29, 0x20, 0x2b, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, // 0.5) + 0.5);.  g
	0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x28, 0x76, // l_FragColor = (v
	0x65, 0x63, 0x34, 0x28, 0x30, 0x2e, 0x39, 0x2c, 0x20, 0x30, 0x2e, 0x36, 0x2c, 0x20, 0x30, 0x2e, // ec4(0.9, 0.6, 0.
	0x34, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, // 4, 1.0) * (tmpva
	0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, // r_1 * tmpvar_1))
	0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                             // ;.}...
};
