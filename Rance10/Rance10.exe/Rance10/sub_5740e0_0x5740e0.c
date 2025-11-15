// 函数: sub_5740e0
// 地址: 0x5740e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0xc)
int32_t edi = *(arg1 + 0x10)
int32_t var_4 = edi

for (; i != edi; i = &i[3])
    int32_t edx_1 = i[1]
    int32_t* ecx = *i
    
    if (ecx != edx_1)
        do
            int32_t ebx_1 = 0
            int32_t* eax = *ecx + 0x24
            edi = (sbb.d(edi, edi, &eax[3] u< eax) & 0xfffffffd) + 3
            int32_t var_8_1 = edi
            
            if (eax u<= &eax[3])
                do
                    ebx_1 += 1
                    *eax = 0
                    eax = &eax[1]
                while (ebx_1 != edi)
            
            ecx = &ecx[1]
        while (ecx != edx_1)
        
        edi = var_4
