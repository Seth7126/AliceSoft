// 函数: sub_5cadc0
// 地址: 0x5cadc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_410
int32_t eax_1 = __security_cookie ^ &var_410
void** edi = arg2
arg1[0x18f] = &arg1[0x8f]
arg1[0x8f] = 0xffffffff
arg1[0x18f] += 4
void** eax_3
int32_t* ecx_1
int32_t edx
eax_3, ecx_1, edx = sub_417ed0(&arg1[0x45], edi)
char eax_5

if (eax_3 != arg1[0x45])
    eax_5, ecx_1, edx = sub_40c3a0(edi, &eax_3[4])

void** var_40c

if (eax_3 == arg1[0x45] || eax_5 != 0)
    var_40c = arg1[0x45]
else
    var_40c = eax_3

int32_t* result

if (var_40c == arg1[0x45])
    if (edi[5] u>= 0x10)
        edi = *edi
    
    void** var_424_7 = edi
    result = sub_5c24e0(var_40c, edx, ecx_1, arg1, 0x6e8bb4)
else
    int32_t ebp_1 = var_40c[0xa]
    ecx_1 = arg1[0x28] - arg1[0x27]
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = muls.dp.d(0x38e38e39, ecx_1)
    edx = edx_1 s>> 4
    void** eax_10 = ecx_1 s/ 0x48
    
    if (ebp_1 u>= eax_10)
    label_5caefd:
        
        if (edi[5] u>= 0x10)
            edi = *edi
        
        void** var_424_6 = edi
        result = sub_5c24e0(eax_10, edx, ecx_1, arg1, 0x6e8c34)
    else
        eax_10 = arg1[0x27]
        ecx_1 = ebp_1 * 9
        void* esi_1 = &eax_10[ecx_1 * 2]
        
        if (esi_1 == 0)
            goto label_5caefd
        
        if (*(esi_1 + 0x34) == 1)
            if (arg1[0x4ae].b != 0)
                sub_5b34e0(arg1[0x4a0] + ebp_1 * 0x38)
            
            void var_408
            sub_5de000(&arg1[0x88], &var_408, *(esi_1 + 0x28))
            int32_t ecx_9
            int32_t edx_2
            result, ecx_9, edx_2 = sub_5caba0(arg1, esi_1, &var_408, *(esi_1 + 0x28))
            
            if (result.b != 0)
                result.b = 1
            else
                int32_t var_424_5 = 0x6e8c74
                sub_5c2400(result, edx_2, ecx_9, arg1, "CallScenarioFunction")
                result.b = 0
        else
            if (edi[5] u>= 0x10)
                edi = *edi
            
            void** var_424_2 = edi
            result = sub_5c24e0(eax_10, edx, ecx_1, arg1, 0x6e8bf8)

sub_69a5bc(eax_1 ^ &var_410)
return result
