// 函数: sub_5c8550
// 地址: 0x5c8550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
void var_18
void* edx = &var_18
int32_t edi = 0
var_1c = &var_18
arg1[0x8d] -= 4
int32_t ebp = *arg1[0x8d]
void* eax_3 = &var_18 + (ebp << 2)
int32_t* ecx = nullptr
uint32_t ebx_3 = (eax_3 - &var_18 + 3) u>> 2

if (&var_18 u> eax_3)
    ebx_3 = 0

if (ebx_3 != 0)
    ecx = arg1[0x8d]
    
    do
        ecx -= 4
        edx += 4
        arg1[0x8d] = ecx
        edi += 1
        *(edx - 4) = *ecx
    while (edi u< ebx_3)

arg1[0x8d] -= 4
int32_t edx_1 = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t edi_1 = *arg1[0x8d]
int32_t eax_9 = (arg1[0x5e] - arg1[0x5d]) s>> 2
uint32_t eax_17

if (edi_1 u>= eax_9)
label_5c86c6:
    int32_t var_30_2 = edx_1
    int32_t var_34_3 = edi_1
    int32_t var_38_2 = 0x6e8138
    eax_17 = sub_5c2400(eax_9, edx_1, ecx, arg1, "A_ALLOC")
else
    eax_9 = arg1[0x5d]
    ecx = *(eax_9 + (edi_1 << 2))
    
    if (ecx == 0)
        goto label_5c86c6
    
    eax_9 = ecx[3] u>> 2
    
    if (edx_1 u>= eax_9)
        goto label_5c86c6
    
    int32_t eax_11
    
    if (ecx[3] != 0)
        eax_11 = ecx[2]
    else
        eax_11 = 0
    
    int32_t edi_2 = *(eax_11 + (edx_1 << 2))
    int32_t eax_14 = (arg1[0x5e] - arg1[0x5d]) s>> 2
    
    if (edi_2 u>= eax_14)
    label_5c86ab:
        int32_t* eax_19 = sub_5c24e0(eax_14, edx_1, ecx, arg1, "array.Alloc()\n")
        sub_69a5bc(eax_1 ^ &var_1c)
        return eax_19
    
    eax_14 = arg1[0x5d]
    void* edi_3 = *(eax_14 + (edi_2 << 2))
    
    if (edi_3 == 0)
        goto label_5c86ab
    
    if (*(edi_3 + 0x48) != 0)
        int32_t eax_15
        int32_t ecx_2
        int32_t edx_2
        eax_15, ecx_2, edx_2 = sub_5d4a90(edi_3)
        
        if (eax_15.b == 0)
            int32_t var_30_1 = 0x6e817c
            int32_t eax_16 = sub_5c2400(eax_15, edx_2, ecx_2, arg1, "A_ALLOC")
            sub_69a5bc(eax_1 ^ &var_1c)
            return eax_16
    
    int32_t* ecx_6
    int32_t edx_3
    eax_17, ecx_6, edx_3 = sub_5d4340(edi_3, ebp, &var_18, 1)
    
    if (eax_17.b == 0)
        int32_t* eax_18 = sub_5c24e0(eax_17, edx_3, ecx_6, arg1, 0x6e8258)
        sub_69a5bc(eax_1 ^ &var_1c)
        return eax_18

sub_69a5bc(eax_1 ^ &var_1c)
return eax_17
