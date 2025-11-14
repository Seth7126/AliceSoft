// 函数: sub_5c0c20
// 地址: 0x5c0c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_28
int32_t eax_1 = __security_cookie ^ &var_28
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
sub_402110(&var_20, 0x6e62e4, 1)
void** eax_2 = sub_417ed0(&arg1[0x45], &var_20)
char eax_4

if (eax_2 != arg1[0x45])
    eax_4 = sub_40c3a0(&var_20, &eax_2[4])

void** var_24

if (eax_2 == arg1[0x45] || eax_4 != 0)
    var_24 = arg1[0x45]
else
    var_24 = eax_2

void** eax_6 = var_24
void** esi_1

if (eax_6 != arg1[0x45])
    esi_1 = eax_6[0xa]
    eax_6.b = 1
else
    esi_1 = var_24
    eax_6.b = 0

int32_t* ebx
ebx.b = eax_6.b == 0

if (var_c u>= 0x10)
    j__free(var_20.d)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0

if (ebx.b == 0)
    void* ecx_5 = arg1[0x28] - arg1[0x27]
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = muls.dp.d(0x38e38e39, ecx_5)
    int32_t eax_10 = ecx_5 s/ 0x48
    
    if (esi_1 u>= eax_10)
    label_5c0d8a:
        void** var_38_7 = esi_1
        int32_t* eax_14 = sub_5c24e0(eax_10, edx_1 s>> 4, ecx_5, arg1, 0x6e6384)
        sub_69a5bc(eax_1 ^ &var_28)
        return eax_14
    
    eax_10 = arg1[0x27]
    ecx_5 = esi_1 * 9
    int32_t ebx_1 = eax_10 + (ecx_5 << 3)
    
    if (ebx_1 == 0)
        goto label_5c0d8a
    
    int32_t eax_11
    int32_t ecx_7
    int32_t edx_3
    eax_11, ecx_7, edx_3 = sub_5d6080(&arg1[0x5b], ebx_1, &var_24)
    
    if (eax_11.b == 0)
        int32_t var_38_4 = 0x6e6364
        int32_t eax_12 = sub_5c2400(eax_11, edx_3, ecx_7, arg1, "CreateGlobalConstructor")
        sub_69a5bc(eax_1 ^ &var_28)
        return eax_12
    
    if (sub_5c0400(arg1, var_24).b != 0)
        sub_5c1f40(arg1, 0, 0xfffffffe, *(ebx_1 + 4))
        int32_t eax_13
        eax_13.b = 1
        sub_69a5bc(eax_1 ^ &var_28)
        return eax_13

eax_6.b = 0
sub_69a5bc(eax_1 ^ &var_28)
return eax_6
