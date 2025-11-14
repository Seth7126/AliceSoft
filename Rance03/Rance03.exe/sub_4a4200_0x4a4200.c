// 函数: sub_4a4200
// 地址: 0x4a4200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    return 

int32_t* edi = *(arg1 + 0x60)
int32_t var_c = arg2
int32_t* eax = sub_4a55e0(edi)

if (eax.b == 0)
    return 

int32_t var_c_1 = arg2
int32_t* esi_1 = sub_4a56f0(edi)
int32_t* ecx_2 = esi_1[0x17]

if (ecx_2 != 0)
    eax = (*(*ecx_2 + 8))(1)

bool cond:0_1

if (ecx_2 != 0 && eax == 2)
    int32_t* ecx_3 = esi_1[0x17]
    
    if (ecx_3 == 0)
        return 
    
    cond:0_1 = (*(*ecx_3 + 8))(1) != 2
label_4a4253:
    
    if (cond:0_1)
        return 
    
    *(esi_1[0x17] + 0x104)
    return 

int32_t* ecx_4 = esi_1[0x17]

if (ecx_4 == 0 || (*(*ecx_4 + 8))(1) != 3)
    return 

int32_t* ecx_5 = esi_1[0x17]

if (ecx_5 == 0)
    return 

cond:0_1 = (*(*ecx_5 + 8))(1) != 3
goto label_4a4253
