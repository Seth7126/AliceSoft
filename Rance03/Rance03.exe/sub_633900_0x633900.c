// 函数: sub_633900
// 地址: 0x633900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_408
int32_t eax_1 = __security_cookie ^ &var_408
int32_t ebx = arg2
var_408 = ebx
void* edi = arg4
*(arg3 + 0x90) = ebx
*(arg3 + 0x94) = 0

if (ebx == 0)
    edi = nullptr

void* edi_1 = edi
int32_t* result

while (true)
    if (*(arg3 + 0x88) == 0)
        if (*(arg3 + 0x13c) == 0)
            uint32_t i
            
            do
                sub_62fcc0(arg3, nullptr)
                i = sub_62fb90(arg3)
                bool cond:2_1 = *(arg3 + 0x11c) != 0x49444154
                *(arg3 + 0x13c) = i
                
                if (cond:2_1)
                    sub_62a520(arg3, "Not enough image data")
                    noreturn
            while (i == 0)
        
        uint32_t ebx_1 = *(arg3 + 0x2c0)
        uint32_t eax_2 = *(arg3 + 0x13c)
        
        if (ebx_1 u> eax_2)
            ebx_1 = eax_2
        
        void* eax_3 = sub_62fe60(eax_2, ebx_1, arg3, 0)
        int32_t eax_4 = *(arg3 + 0x5c)
        
        if (eax_4 == 0)
            sub_62a520(arg3, "Call to NULL read function")
            noreturn
        
        sub_627190(eax_4(arg3, eax_3, ebx_1), eax_3, arg3, ebx_1)
        *(arg3 + 0x88) = ebx_1
        *(arg3 + 0x13c) -= ebx_1
        ebx = var_408
        *(arg3 + 0x84) = eax_3
    
    if (ebx == 0)
        *(arg3 + 0x94) = 0x400
        void var_404
        *(arg3 + 0x90) = &var_404
    else
        void* eax_6 = 0xffffffff
        
        if (edi_1 u< 0xffffffff)
            eax_6 = edi_1
        
        edi_1 -= eax_6
        *(arg3 + 0x94) = eax_6
    
    result = sub_623b50(arg3 + 0x84, 0)
    int32_t* result_1 = result
    
    if (ebx == 0)
        result = 0x400 - *(arg3 + 0x94)
        edi_1 += result
    else
        edi_1 += *(arg3 + 0x94)
    
    *(arg3 + 0x94) = 0
    void* ecx_5
    char* edx_2
    
    if (result_1 == 1)
        *(arg3 + 0x74) |= 8
        *(arg3 + 0x78) |= 8
        bool cond:3_1 = *(arg3 + 0x88) u> 0
        *(arg3 + 0x90) = 0
        
        if (cond:3_1 || *(arg3 + 0x13c) u> 0)
            result = sub_62a7c0(arg3, "Extra compressed data")
        
        if (edi_1 == 0)
            break
        
        ecx_5 = arg3
        
        if (ebx != 0)
            sub_62a520(ecx_5, "Not enough image data")
            noreturn
        
        edx_2 = "Too much image data"
    else if (result_1 != 0)
        ecx_5 = arg3
        sub_627c20(ecx_5, result_1)
        edx_2 = *(arg3 + 0x9c)
        
        if (ebx != 0)
            sub_62a740(ecx_5, edx_2)
            noreturn
    else
        if (edi_1 == 0)
            break
        
        continue
    
    result = sub_62a7c0(ecx_5, edx_2)
    break

sub_69a5bc(eax_1 ^ &var_408)
return result
