// 函数: sub_48ff80
// 地址: 0x48ff80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1

if (arg1[2] == 0)
    return 

void* esi_1 = arg1[3]

if (esi_1 == 0 || arg1[5] == 0)
    return 

bool cond:0_1 = *(esi_1 + 8) == 4
int32_t* arg_4 = arg_4
int32_t* esi_2

if (cond:0_1)
    sub_42f3d0(esi_1 + 0x50, &var_4, &arg_4)
    int32_t* eax = var_4
    
    if (eax != *(esi_1 + 0x50))
        esi_2 = eax[5]
    else
        esi_2 = nullptr
else
    esi_2 = nullptr

int32_t* ecx_1 = arg1[7]

if (ecx_1 == esi_2)
    return 

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()

arg1[7] = esi_2

if (esi_2 != 0)
    (**esi_2)()

if (arg1[7] == 0)
    return 

int32_t* ecx_3 = arg1[6]

if (ecx_3 != 0 && arg2 != 0)
    (*(*ecx_3 + 8))()
