// 函数: sub_56fbb0
// 地址: 0x56fbb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg4
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((ebx - arg2) s>> 2)
void* edi = &arg2[(eax_3 - edx) s>> 1]
sub_56fe80(ebx - 4, edi, arg2, ebx - 4, arg5)
int32_t* ebp = edi + 4
int32_t* var_14 = ebp
int16_t top

if (arg2 u< edi)
    do
        int32_t* esi_1 = *edi
        (*(**(edi - 4) + 8))()
        float var_18_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
        unimplemented  {fstp dword [esp+0x10], st0}
        (*(*esi_1 + 8))()
        float var_8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
        unimplemented  {fstp dword [esp+0x20], st0}
        top += 2
        
        if (var_18_1 > var_8_1)
            break
        
        int32_t* esi_3 = *(edi - 4)
        (*(**edi + 8))()
        float var_8_2 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
        unimplemented  {fstp dword [esp+0x20], st0}
        (*(*esi_3 + 8))()
        float var_18_2 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
        unimplemented  {fstp dword [esp+0x10], st0}
        top += 2
        
        if (var_8_2 > var_18_2)
            break
        
        edi -= 4
    while (arg2 u< edi)
    
    ebx = arg4

if (ebp u< ebx)
    do
        int32_t* esi_4 = *edi
        (*(**ebp + 8))()
        float var_8_3 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
        unimplemented  {fstp dword [esp+0x20], st0}
        (*(*esi_4 + 8))()
        float var_c_2 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
        unimplemented  {fstp dword [esp+0x1c], st0}
        top += 2
        
        if (var_8_3 > var_c_2)
            break
        
        int32_t* esi_5 = *ebp
        (*(**edi + 8))()
        float var_8_4 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
        unimplemented  {fstp dword [esp+0x20], st0}
        (*(*esi_5 + 8))()
        float var_c_3 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
        unimplemented  {fstp dword [esp+0x1c], st0}
        top += 2
        
        if (var_8_4 > var_c_3)
            break
        
        ebp = &ebp[1]
    while (ebp u< ebx)
    
    var_14 = ebp

void* edx_2 = edi
int32_t* ebx_2 = ebp
void* var_18_3 = edx_2

while (true)
    int32_t* var_c_4 = ebx_2
    
    while (true)
        if (ebx_2 u< arg4)
            do
                int32_t* esi_6 = *ebx_2
                (*(**edi + 8))()
                float var_8_5 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                unimplemented  {fstp dword [esp+0x20], st0}
                (*(*esi_6 + 8))()
                float var_c_5 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                unimplemented  {fstp dword [esp+0x1c], st0}
                top += 2
                
                if (not(var_8_5 > var_c_5))
                    int32_t* esi_7 = *edi
                    (*(**ebx_2 + 8))()
                    float var_8_6 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                    unimplemented  {fstp dword [esp+0x20], st0}
                    (*(*esi_7 + 8))()
                    float var_c_6 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                    unimplemented  {fstp dword [esp+0x1c], st0}
                    top += 2
                    
                    if (var_8_6 > var_c_6)
                        break
                    
                    int32_t* eax_32 = ebp
                    ebp = &ebp[1]
                    
                    if (eax_32 != ebx_2)
                        int32_t ecx_13 = ebp[-1]
                        ebp[-1] = *ebx_2
                        *ebx_2 = ecx_13
                
                ebx_2 = &ebx_2[1]
            while (ebx_2 u< arg4)
            
            edx_2 = var_18_3
            var_14 = ebp
            var_c_4 = ebx_2
        
        bool cond:0_1 = edx_2 != arg2
        
        if (edx_2 u> arg2)
            void* ebp_1 = var_18_3
            void* ebx_3 = ebp_1 - 4
            int32_t* eax_44
            
            do
                int32_t* esi_8 = *edi
                (*(**ebx_3 + 8))()
                float var_8_7 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                unimplemented  {fstp dword [esp+0x20], st0}
                (*(*esi_8 + 8))()
                float var_18_4 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                unimplemented  {fstp dword [esp+0x10], st0}
                top += 2
                
                if (not(var_8_7 > var_18_4))
                    int32_t* esi_9 = *ebx_3
                    (*(**edi + 8))()
                    float var_8_8 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                    unimplemented  {fstp dword [esp+0x20], st0}
                    (*(*esi_9 + 8))()
                    float var_18_5 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                    unimplemented  {fstp dword [esp+0x10], st0}
                    top += 2
                    
                    if (var_8_8 > var_18_5)
                        eax_44 = arg2
                        break
                    
                    edi -= 4
                    
                    if (edi != ebx_3)
                        int32_t ecx_18 = *edi
                        *edi = *ebx_3
                        *ebx_3 = ecx_18
                
                eax_44 = arg2
                ebp_1 -= 4
                ebx_3 -= 4
            while (eax_44 u< ebp_1)
            
            ebx_2 = var_c_4
            var_18_3 = ebp_1
            edx_2 = var_18_3
            cond:0_1 = edx_2 != eax_44
            ebp = var_14
        
        if (not(cond:0_1))
            if (ebx_2 == arg4)
                *arg3 = edi
                arg3[1] = ebp
                return arg3
            
            if (ebp != ebx_2)
                int32_t ecx_19 = *edi
                *edi = *ebp
                *ebp = ecx_19
            
            void* edx_3 = edi
            int32_t* esi_10 = ebx_2
            ebp = &ebp[1]
            edi += 4
            var_14 = ebp
            ebx_2 = &ebx_2[1]
            int32_t ecx_20 = *edx_3
            *edx_3 = *esi_10
            edx_2 = var_18_3
            *esi_10 = ecx_20
            break
        
        edx_2 -= 4
        var_18_3 = edx_2
        
        if (ebx_2 != arg4)
            int32_t ecx_23 = *ebx_2
            *ebx_2 = *edx_2
            ebx_2 = &ebx_2[1]
            *edx_2 = ecx_23
            break
        
        edi -= 4
        
        if (edx_2 != edi)
            int32_t ecx_21 = *edx_2
            *edx_2 = *edi
            *edi = ecx_21
        
        int32_t ecx_22 = *edi
        ebp -= 4
        var_14 = ebp
        *edi = *ebp
        *ebp = ecx_22
