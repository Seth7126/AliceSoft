// 函数: sub_5c2db0
// 地址: 0x5c2db0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_28
int32_t eax_1 = __security_cookie ^ &var_28
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
sub_402110(&var_20, 0x6e68cc, 1)
void** eax_2 = sub_417ed0(&arg1[0x45], &var_20)
char eax_4

if (eax_2 != arg1[0x45])
    eax_4 = sub_40c3a0(&var_20, &eax_2[4])

void** var_24

if (eax_2 == arg1[0x45] || eax_4 != 0)
    var_24 = arg1[0x45]
else
    var_24 = eax_2

void** result
void** esi_1

if (var_24 != arg1[0x45])
    esi_1 = var_24[0xa]
    result.b = 1
else
    esi_1 = var_24
    result.b = 0

int32_t* ebx
ebx.b = result.b == 0

if (var_c u>= 0x10)
    j__free(var_20.d)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0

if (ebx.b == 0)
    if (arg1[0x4ae].b != ebx.b)
        sub_5b34e0(arg1[0x4a0] + esi_1 * 0x38)
    
    result = sub_5c0c20(arg1)
    
    if (result.b == 0)
        sub_69a5bc(eax_1 ^ &var_28)
        return result
    
    while (arg1[0x85].b != 0)
        int16_t* eax_7 = arg1[0x82]
        uint32_t ecx_8 = zx.d(*eax_7)
        arg1[0x82] = &eax_7[1]
        sub_5c1100(arg1, ecx_8)
    
    arg1[0x85].b = 1

result.b = 1
sub_69a5bc(eax_1 ^ &var_28)
return result
