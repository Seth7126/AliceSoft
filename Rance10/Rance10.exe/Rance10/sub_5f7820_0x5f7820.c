// 函数: sub_5f7820
// 地址: 0x5f7820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = arg6
int32_t esi = arg2
int32_t edi = arg5

while (true)
    if (edi s< 0)
        esi -= edi
        i_1 += edi
        edi = 0
        
        if (esi s>= 0)
            continue
    else if (esi s>= 0)
        arg6 = i_1
        
        if (edi + i_1 s> (*(*arg4 + 8))())
            i_1 = (*(*arg3 + 8))() - edi
            arg6 = i_1
        
        if (esi + i_1 s> (*(*arg3 + 8))())
            i_1 = (*(*arg3 + 8))() - esi
            arg6 = i_1
        
        int32_t* ecx_6 = arg4
        
        if (arg3 == ecx_6 && esi s> edi && esi s< edi + i_1)
            arg5 = i_1 - 1
            
            if (i_1 - 1 s>= 0)
                int32_t ebx_2 = i_1 - 1
                int32_t ebp_1 = ebx_2 + esi
                int32_t temp1_1
                
                do
                    int32_t eax_10 = edi - esi + ebp_1
                    sub_5f66e0(eax_10, ebp_1, arg3, ecx_6, eax_10)
                    ecx_6 = arg4
                    ebp_1 -= 1
                    temp1_1 = ebx_2
                    ebx_2 -= 1
                while (temp1_1 - 1 s>= 0)
                return arg6
        else if (i_1 s> 0)
            int32_t edi_2 = edi - esi
            arg5 = i_1
            int32_t i
            
            do
                int32_t eax_12 = esi + edi_2
                sub_5f66e0(eax_12, esi, arg3, ecx_6, eax_12)
                ecx_6 = arg4
                esi += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
            return arg6
        
        return i_1
    
    edi -= esi
    i_1 += esi
    esi = 0
