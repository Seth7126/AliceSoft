// 函数: sub_690d50
// 地址: 0x690d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t esi
int32_t var_8 = esi
int32_t* eax_1 = (*(*arg1 + 4))()

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t* eax_3 = (*(*arg1 + 8))()

if (eax_3 == 0)
    eax_3.b = 0
    return eax_3

int32_t eax_5

if ((**eax_3)() s> 0)
    int32_t ebx_1 = 0
    
    if ((**eax_3)() s> 0)
        void* esi_5 = &arg1[2]
        
        do
            int32_t* eax_9 = (*(*eax_1 + 4))((*(*eax_3 + 4))(ebx_1))
            esi_5 += 0x30
            ebx_1 += 1
            *(esi_5 - 0x38) = *eax_9
            *(esi_5 - 0x34) = eax_9[4]
            *(esi_5 - 0x30) = eax_9[8]
            *(esi_5 - 0x2c) = eax_9[0xc]
            *(esi_5 - 0x28) = eax_9[1]
            *(esi_5 - 0x24) = eax_9[5]
            *(esi_5 - 0x20) = eax_9[9]
            *(esi_5 - 0x1c) = eax_9[0xd]
            *(esi_5 - 0x18) = eax_9[2]
            *(esi_5 - 0x14) = eax_9[6]
            *(esi_5 - 0x10) = eax_9[0xa]
            *(esi_5 - 0xc) = eax_9[0xe]
            eax_5 = (**eax_3)()
        while (ebx_1 s< eax_5)

eax_5.b = 1
return eax_5
