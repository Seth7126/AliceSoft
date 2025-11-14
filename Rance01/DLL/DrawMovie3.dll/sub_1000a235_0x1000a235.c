// 函数: sub_1000a235
// 地址: 0x1000a235
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_20 = edi
void* var_18
sub_10004910(&var_18, arg1)
char* esi = arg2

if (arg3 != 0)
    *arg3 = esi

void* var_10
char var_c

if (esi != 0)
    if (arg4 == 0)
    label_1000a299:
        void* ecx_1 = var_18
        int32_t ebx
        ebx.b = *esi
        int32_t result = 0
        void* edi_1 = &esi[1]
        
        while (true)
            int32_t eax_4
            
            if (*(ecx_1 + 0xac) s<= 1)
                eax_4 = zx.d(*(*(ecx_1 + 0xc8) + (zx.d(ebx.b) << 1))) & 8
            else
                eax_4 = sub_1000af2a(zx.d(ebx.b), 8, &var_18)
                ecx_1 = var_18
            
            if (eax_4 == 0)
                break
            
            ebx.b = *edi_1
            edi_1 += 1
        
        if (ebx.b == 0x2d)
            arg5 |= 2
            ebx.b = *edi_1
            edi_1 += 1
        else if (ebx.b == 0x2b)
            ebx.b = *edi_1
            edi_1 += 1
        
        if (arg4 s< 0 || arg4 == 1 || arg4 s> 0x24)
            if (arg3 != 0)
                *arg3 = esi
            
            if (var_c != 0)
                *(var_10 + 0x70) &= 0xfffffffd
            
            return 0
        
        if (arg4 != 0)
            if (arg4 == 0x10 && ebx.b == 0x30)
                goto label_1000a346
        else if (ebx.b == 0x30)
            int32_t eax_7
            eax_7.b = *edi_1
            
            if (eax_7.b == 0x78 || eax_7.b == 0x58)
                arg4 = 0x10
            label_1000a346:
                eax_7.b = *edi_1
                
                if (eax_7.b == 0x78 || eax_7.b == 0x58)
                    ebx.b = *(edi_1 + 1)
                    edi_1 += 2
            else
                arg4 = 8
        else
            arg4 = 0xa
        
        int32_t eax_8 = 0xffffffff
        int32_t edx_2 = 0
        uint32_t temp0_1 = divu.dp.d(edx_2:eax_8, arg4)
        
        while (true)
            uint32_t ecx_3 = zx.d(*(*(ecx_1 + 0xc8) + (zx.d(ebx.b) << 1)))
            int32_t ecx_5
            
            if ((ecx_3.b & 4) == 0)
                if ((ecx_3 & 0x103) == 0)
                    break
                
                ecx_3.b = ebx.b
                ecx_3.b -= 0x61
                int32_t ecx_6 = sx.d(ebx.b)
                
                if (ecx_3.b u<= 0x19)
                    ecx_6 -= 0x20
                
                ecx_5 = ecx_6 - 0x37
            else
                ecx_5 = sx.d(ebx.b) - 0x30
            
            if (ecx_5 u>= arg4)
                break
            
            arg5 |= 8
            
            if (result u< temp0_1 || (result == temp0_1 && ecx_5 u<= modu.dp.d(edx_2:eax_8, arg4)))
                result = result * arg4 + ecx_5
            else
                arg5 |= 4
                
                if (arg3 == 0)
                    break
            
            ebx.b = *edi_1
            edi_1 += 1
        
        void* edi_3 = edi_1 - 1
        
        if ((arg5.b & 8) == 0)
            if (arg3 != 0)
                edi_3 = arg2
            
            result = 0
        else if ((arg5.b & 4) != 0)
        label_1000a406:
            *__errno() = 0x22
            
            if ((arg5.b & 1) == 0)
                int32_t eax_13
                eax_13.b = (arg5.b & 2) != 0
                result = eax_13 + 0x7fffffff
            else
                result = 0xffffffff
        else if ((arg5.b & 1) == 0)
            int32_t eax_11 = arg5 & 2
            
            if (eax_11 != 0 && result u> 0x80000000)
                goto label_1000a406
            
            if (eax_11 == 0 && result u> 0x7fffffff)
                goto label_1000a406
        
        if (arg3 != 0)
            *arg3 = edi_3
        
        if ((arg5.b & 2) != 0)
            result = neg.d(result)
        
        if (var_c != 0)
            *(var_10 + 0x70) &= 0xfffffffd
        
        return result
    
    if (arg4 s>= 2 && arg4 s<= 0x24)
        goto label_1000a299

*__errno() = 0x16
sub_100020e4(0, 0, 0, 0, 0)

if (var_c != 0)
    *(var_10 + 0x70) &= 0xfffffffd

return 0
