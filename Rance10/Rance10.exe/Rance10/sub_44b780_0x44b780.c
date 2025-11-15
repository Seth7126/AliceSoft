// 函数: sub_44b780
// 地址: 0x44b780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *arg1
int32_t* i_1 = *eax
*eax = eax
void* result = *arg1
*(result + 4) = result
arg1[1] = 0

if (i_1 != *arg1)
    int32_t* i
    
    do
        int32_t eax_1 = i_1[7]
        void* esi_1 = &i_1[2]
        i = *i_1
        
        if (eax_1 u>= 0x10)
            sub_403160(*esi_1, eax_1 + 1, 1)
        
        *(esi_1 + 0x14) = 0xf
        bool cond:0_1 = *(esi_1 + 0x14) u< 0x10
        *(esi_1 + 0x10) = 0
        
        if (not(cond:0_1))
            esi_1 = *esi_1
        
        *esi_1 = 0
        result = sub_403160(i_1, 1, 0x24)
        i_1 = i
    while (i != *arg1)

return result
