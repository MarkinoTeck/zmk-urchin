/**
 * This file includes custom keycodes for the italian input language setting.
 * If you only type in english, you can delete this file and it's import.
 * If you wish to replace this file with your preferred language, use
 * the qmk version as reference:
 * https://github.com/qmk/qmk_firmware/tree/master/quantum/keymap_extras
*/


/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ \ │   │   │   │   │   │   │   │   │   │   │ ' │ ì │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ è │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ò │ à │ ù │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │   │   │   │   │   │   │   │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define IT_BSLH GRAVE            // backslash
#define IT_SQUOT MINUS           // '
#define IT_IGRV EQUAL            // ì
// Row 2
#define IT_EGRV LBKT             // è
#define IT_PLUS SLASH            // +
// Row 3
#define IT_OGRV SEMI             // ò
#define IT_AGRV APOS             // à
#define IT_UGRV NON_US_HASH      // ù
// Row 4
#define IT_LESS NON_US_BSLH      // <
#define IT_MINUS RBKT            // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ | │ ! │ " │ £ │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ^ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ é │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ç │ ° │ § │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define IT_PIPE LS(GRAVE)        // |
#define IT_EXCL LS(N1)           // !
#define IT_DQUOT LS(N2)          // "
#define IT_PND LS(N3)            // £
#define IT_USD LS(N4)            // $
#define IT_PERC LS(N5)           // %
#define IT_AND LS(N6)            // &
#define IT_FSLH LS(N7)           // /
#define IT_LPAR LS(N8)           // (
#define IT_RPAR LS(N9)           // )
#define IT_EQL LS(N0)            // =
#define IT_QUES LS(MINUS)        // ?
#define IT_CARET LS(EQUAL)       // ^
// Row 2
#define IT_EACU LS(LBKT)         // é
#define IT_AST LS(RBKT)          // *
// Row 3
#define IT_CCED LS(SEMI)         // ç
#define IT_DEG LS(APOS)          // °
#define IT_SECT LS(NON_US_HASH)  // §
// Row 4
#define IT_GREAT LS(NON_US_BSLH) // >
#define IT_UNDER LS(SLASH)       // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │ [ │ ] │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ @ │ # │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 2
#define IT_EUR RA(E)             // €
#define IT_LBKT RA(LBKT)         // [
#define IT_RBKT RA(RBKT)         // ]
// Row 3
#define IT_AT RA(SEMI)           // @
#define IT_HASH RA(APOS)         // #

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ { │ } │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 2
#define IT_LBRC LS(RA(LBKT))     // {
#define IT_RBRC LS(RA(RBKT))     // }

/** 
 * Personalized symbols.
 * 
 * These symbols are not part of the default italian input.
 * I use a custom windows keymap to input them.
*/
#define IT_BKTK RA(MINUS)        // `
#define IT_TILDE RA(EQUAL)       // ~
#define IT_CEGR RA(LS(E))        // È

/**
 * Mathematical symbols (Analisi 1 / Algebra lineare 1).
 *
 * Like the personalized symbols above, these are NOT part of the italian
 * input: they need to be mapped in the custom windows layout using the
 * same AltGr / Shift+AltGr combination listed on each line.
 */
// Logic & sets
#define M_FORALL RA(A)           // ∀
#define M_EXISTS RA(X)           // ∃
#define M_EMPTY RA(Z)            // ∅
#define M_IN RA(N)               // ∈
#define M_UNION RA(U)            // ∪
#define M_INTER RA(J)            // ∩
#define M_SUBSET RA(N9)          // ⊂
#define M_SUBEQ RA(N0)           // ⊆
#define M_IMPL RA(N7)            // ⇒
#define M_IFF RA(N8)             // ⇔
#define M_ARROW RA(N6)           // →
// Relations
#define M_LE RA(N1)              // ≤
#define M_GE RA(N2)              // ≥
#define M_NE RA(N3)              // ≠
#define M_APPROX RA(N4)          // ≈
#define M_PM RA(N5)              // ±
// Analysis
#define M_INF RA(O)              // ∞
#define M_SQRT RA(R)             // √
#define M_INT RA(I)              // ∫
#define M_SUM RA(S)              // ∑
#define M_PART RA(D)             // ∂
// Number sets
#define M_REAL LS(RA(R))         // ℝ
#define M_NAT LS(RA(N))          // ℕ
#define M_INTG LS(RA(Z))         // ℤ
#define M_RAT LS(RA(Q))          // ℚ
#define M_CPLX LS(RA(C))         // ℂ
// Greek letters
#define M_EPS RA(V)              // ε
#define M_DELTA RA(B)            // δ
#define M_PI RA(P)               // π
#define M_LAMBDA RA(L)           // λ
#define M_MU RA(M)               // μ
#define M_THETA RA(T)            // θ
// Linear algebra
#define M_OPLUS LS(RA(O))        // ⊕
#define M_OTIMES LS(RA(T))       // ⊗
#define M_PERP LS(RA(P))         // ⊥
#define M_PAR LS(RA(L))          // ∥
#define M_CONG LS(RA(K))         // ≅
#define M_COMP LS(RA(F))         // ∘
#define M_DOT LS(RA(M))          // ·
#define M_CROSS LS(RA(X))        // ×
#define M_NORM LS(RA(D))         // ‖
#define M_TRANSP LS(RA(H))       // ᵀ
#define M_LANG LS(RA(COMMA))     // ⟨
#define M_RANG LS(RA(DOT))       // ⟩
