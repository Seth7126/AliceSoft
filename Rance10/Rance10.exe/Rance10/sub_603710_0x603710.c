// 函数: sub_603710
// 地址: 0x603710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = *arg1

if (eax == 0xc || eax == 0x14)
    void* ecx = data_7fcbb4
    
    if (ecx != 0)
        eax = sub_6227b0(ecx, arg1[2])
        
        if (eax != 0)
            char* edx
            
            if (*(eax + 0x14) != 0)
                edx = *(eax + 0x10)
            else
                edx = nullptr
            
            if (*edx == 0)
                sub_403490(arg2, edx, nullptr)
                int32_t* eax_1
                eax_1.b = 1
                return eax_1
            
            char* ecx_2 = edx
            
            do
                eax.b = *ecx_2
                ecx_2 = &ecx_2[1]
            while (eax.b != 0)
            
            sub_403490(arg2, edx, ecx_2 - &ecx_2[1])
            int32_t* eax_2
            eax_2.b = 1
            return eax_2

eax.b = 0
return eax
