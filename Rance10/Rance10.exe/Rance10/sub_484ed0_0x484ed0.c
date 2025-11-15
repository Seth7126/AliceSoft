// 函数: sub_484ed0
// 地址: 0x484ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = (*(*arg1 + 0x10))()

if (eax_1 == 0)
    eax_1 = 0xac44

int32_t eax_2
uint32_t edx
eax_2, edx = __allmul(arg2, 0, eax_1, 0)
uint32_t eax_3 = __aulldiv(eax_2, edx, 0x3e8, 0)
uint32_t eax_4 = (*(*arg1 + 0x18))()

if (eax_4 == 0)
    eax_4 = 4
    uint32_t esi_3 = ((*(*arg1 + 0x1c))() * (*(*arg1 + 0xc))()) u>> 3
    
    if (esi_3 != 0)
        eax_4 = esi_3

return eax_4 * eax_3
