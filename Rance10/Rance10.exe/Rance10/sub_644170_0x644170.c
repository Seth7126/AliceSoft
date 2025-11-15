// 函数: sub_644170
// 地址: 0x644170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[2].b != 0 && arg1[9] == arg3 && arg1[0xa] == arg4 && arg1[3] == arg5)
    int32_t eax_2
    eax_2.b = 1
    return eax_2

(*(*arg1 + 0x10))()
bool cond:0 = arg1[0xb] != 0
arg1[2].b = 0
arg1[3] = 0

if (not(cond:0))
    arg1[0xb] = arg2
    (**arg2)()

int32_t* ecx_1 = arg1[4]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    arg1[4] = 0

int32_t* eax_7 = (*(*arg2 + 0x50))()
arg1[4] = eax_7

if (eax_7 == 0)
    eax_7.b = 0
    return eax_7

void* esi = *eax_7
int32_t eax_9 = (*(*arg2 + 0x88))(1)
arg1[4]
int32_t* eax_11

if ((*(esi + 0x30))(arg4, arg4, 1, 1, eax_9).b != 0)
    int32_t* ecx_5 = arg1[5]
    
    if (ecx_5 != 0)
        (*(*ecx_5 + 4))()
        arg1[5] = 0
    
    eax_11 = (*(*arg2 + 0x50))()
    arg1[5] = eax_11
    
    if (eax_11 != 0)
        void* esi_1 = *eax_11
        int32_t eax_15 = (*(*arg2 + 0x88))(1)
        arg1[5]
        
        if ((*(esi_1 + 0x30))(arg4, arg4, 1, 1, eax_15).b != 0)
            arg1[9] = arg4
            arg1[0xa] = arg4
            arg1[3] = arg5
            int32_t eax_17
            eax_17.b = 1
            arg1[2].b = 1
            return eax_17

eax_11.b = 0
return eax_11
