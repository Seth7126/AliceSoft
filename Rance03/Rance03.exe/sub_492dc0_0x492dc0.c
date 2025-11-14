// 函数: sub_492dc0
// 地址: 0x492dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* ebx = arg3
int32_t* ebp = arg4
*ebx = 0
*ebp = 0

if (*(arg1 + 8) == 0)
    return 

void* esi_1 = *(arg1 + 0xc)

if (esi_1 == 0)
    return 

bool cond:0_1 = *(esi_1 + 8) != 5
arg3 = *arg2

if (cond:0_1)
label_492e5a:
    int32_t* ecx_4 = *(arg1 + 0x10)
    
    if (ecx_4 != 0)
        (*(*ecx_4 + 4))()
        *(arg1 + 0x10) = 0
    
    return 

sub_42f3d0(esi_1 + 0x58, &arg4, &arg3)
int32_t* eax = arg4

if (eax == *(esi_1 + 0x58))
    goto label_492e5a

int32_t* esi_2 = eax[5]

if (esi_2 == 0)
    goto label_492e5a

int32_t* ecx_1 = *(arg1 + 0x10)

if (ecx_1 == esi_2)
    return 

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()

*(arg1 + 0x10) = esi_2
(**esi_2)()
int32_t eax_4 = esi_2[2]

if (eax_4 == 0xffffffff)
    eax_4.b = esi_2[3].b
    *ebp = eax_4.b
    return 

*ebx = 1
*arg2 = eax_4
