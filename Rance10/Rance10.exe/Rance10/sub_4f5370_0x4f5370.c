// 函数: sub_4f5370
// 地址: 0x4f5370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg2
sub_6ca100(ebp, *(arg1 + 0x84))
int32_t eax = *(arg1 + 0x80)
void* edx = arg1 + 0x6c
int32_t ebx = *(edx + 0x10)
void* ecx_1

if (eax u< 0x10)
    ecx_1 = edx
else
    ecx_1 = *edx

if (eax u>= 0x10)
    edx = *edx

arg2.b = 0
void* var_14_1 = arg2
sub_6ca200(ebp + 4, *(ebp + 8), edx, ecx_1 + ebx)
arg2.b = 0
sub_4263a0(ebp + 4, &arg2)

if (arg3(ebp) != 0)
    void* eax_3 = *(arg1 + 0x68)
    void* eax_4
    
    if (eax_3 != 0)
        eax_4 = *(eax_3 + 4)
    
    int32_t eax_5
    
    if (eax_3 == 0 || eax_4 == 0)
        eax_5 = 0
    else
        eax_5 = *(eax_4 + 0x40)
    
    sub_6ca100(ebp, eax_5)
    void* esi_1 = *(arg1 + 0x58)
    
    if (esi_1 != 0)
        void* eax_6 = *(esi_1 + 0xc)
        
        if (eax_6 != 0)
            eax_6 = *(eax_6 + 0x40)
        
        sub_6ca100(ebp, eax_6)
        void* eax_7 = *(esi_1 + 4)
        
        if (eax_7 != 0)
            eax_7 = *(eax_7 + 0x40)
        
        sub_6ca100(ebp, eax_7)
        void* var_14_7 = ebp
        sub_4fcf30(esi_1 + 0x10)
        sub_6ca100(ebp, (*(arg1 + 0x60) - *(arg1 + 0x5c)) s>> 2)
        int32_t* esi_2 = *(arg1 + 0x5c)
        int32_t edi_1 = *(arg1 + 0x60)
        
        if (esi_2 == edi_1)
            return 1
        
        while (true)
            void* ebx_1 = *esi_2
            
            if (ebx_1 == 0)
                return 0
            
            void* eax_11 = *(ebx_1 + 0xc)
            
            if (eax_11 != 0)
                eax_11 = *(eax_11 + 0x40)
            
            sub_6ca100(ebp, eax_11)
            void* eax_12 = *(ebx_1 + 4)
            
            if (eax_12 != 0)
                eax_12 = *(eax_12 + 0x40)
            
            sub_6ca100(ebp, eax_12)
            void* var_14_11 = ebp
            sub_4fcf30(ebx_1 + 0x10)
            esi_2 = &esi_2[1]
            
            if (esi_2 == edi_1)
                return 1

return 0
