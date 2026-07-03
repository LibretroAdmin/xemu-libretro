#ifndef HEXAGON_ANALYZE_FUNCS_C_INC
#define HEXAGON_ANALYZE_FUNCS_C_INC

static void analyze_J2_jump(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_J2_jumpr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    ctx_log_pred_read(ctx, PuN);
}

static void analyze_J2_jumpf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    ctx_log_pred_read(ctx, PuN);
}

static void analyze_J2_jumptpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    ctx_log_pred_read(ctx, PuN);
}

static void analyze_J2_jumpfpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    ctx_log_pred_read(ctx, PuN);
}

static void analyze_J2_jumprt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprtpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprfpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumptnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    ctx_log_pred_read_new(ctx, PuN);
}

static void analyze_J2_jumpfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    ctx_log_pred_read_new(ctx, PuN);
}

static void analyze_J2_jumptnewpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    ctx_log_pred_read_new(ctx, PuN);
}

static void analyze_J2_jumpfnewpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    ctx_log_pred_read_new(ctx, PuN);
}

static void analyze_J2_jumprtnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprtnewpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprfnewpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_hintjumpr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprz(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprnz(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprzpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprnzpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprgtez(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprgtezpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprltez(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_jumprltezpt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqi_tp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqi_fp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqi_tp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqi_fp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqi_tp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqi_fp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqi_tp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqi_fp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgti_tp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgti_fp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgti_tp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgti_fp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgti_tp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgti_fp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgti_tp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgti_fp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtui_tp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtui_fp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtui_tp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtui_fp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtui_tp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtui_fp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtui_tp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtui_fp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqn1_tp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqn1_fp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqn1_tp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqn1_fp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqn1_tp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqn1_fp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqn1_tp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeqn1_fp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtn1_tp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtn1_fp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtn1_tp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtn1_fp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtn1_tp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtn1_fp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtn1_tp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpgtn1_fp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_tstbit0_tp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_tstbit0_fp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_tstbit0_tp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_tstbit0_fp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_tstbit0_tp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_tstbit0_fp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_tstbit0_tp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_tstbit0_fp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J4_cmpeq_tp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpeq_fp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpeq_tp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpeq_fp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpeq_tp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpeq_fp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpeq_tp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpeq_fp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgt_tp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgt_fp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgt_tp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgt_fp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgt_tp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgt_fp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgt_tp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgt_fp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgtu_tp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgtu_fp0_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgtu_tp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgtu_fp0_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgtu_tp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgtu_fp1_jump_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgtu_tp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgtu_fp1_jump_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_jumpseti(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_J4_jumpsetr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_J4_cmpeqi_t_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpeqi_t_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpeqi_f_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpeqi_f_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpgti_t_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpgti_t_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpgti_f_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpgti_f_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpgtui_t_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpgtui_t_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpgtui_f_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpgtui_f_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpeqn1_t_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpeqn1_t_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpeqn1_f_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpeqn1_f_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpgtn1_t_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpgtn1_t_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpgtn1_f_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpgtn1_f_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_tstbit0_t_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_tstbit0_t_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_tstbit0_f_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_tstbit0_f_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpeq_t_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpeq_t_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgt_t_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgt_t_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgtu_t_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgtu_t_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmplt_t_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    const int NsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmplt_t_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    const int NsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpltu_t_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    const int NsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpltu_t_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    const int NsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpeq_f_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpeq_f_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgt_f_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgt_f_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgtu_f_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmpgtu_f_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_J4_cmplt_f_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    const int NsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmplt_f_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    const int NsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpltu_f_jumpnv_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    const int NsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J4_cmpltu_f_jumpnv_nt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    const int NsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read_new(ctx, NsN);
}

static void analyze_J2_call(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_J2_callt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    ctx_log_pred_read(ctx, PuN);
}

static void analyze_J2_callf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    ctx_log_pred_read(ctx, PuN);
}

static void analyze_J2_callr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_callrt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_callrf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_callrh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_loop0r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_loop1r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_loop0i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_J2_loop1i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_J2_ploop1sr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_ploop1si(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_J2_ploop2sr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_ploop2si(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_J2_ploop3sr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_J2_ploop3si(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_J2_endloop01(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_J2_endloop0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_J2_endloop1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_L2_loadrub_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadrub_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadrub_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int ReN = insn->regno[1];
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_L2_loadrub_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrub_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrub_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrub_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrub_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadrb_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadrb_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int ReN = insn->regno[1];
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_L2_loadrb_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrb_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrb_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrb_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrb_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadruh_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadruh_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadruh_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int ReN = insn->regno[1];
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_L2_loadruh_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadruh_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadruh_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadruh_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadruh_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrh_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadrh_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadrh_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int ReN = insn->regno[1];
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_L2_loadrh_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrh_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrh_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrh_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrh_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadri_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadri_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadri_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int ReN = insn->regno[1];
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_L2_loadri_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadri_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadri_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadri_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadri_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrd_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_L4_loadrd_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_L4_loadrd_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int ReN = insn->regno[1];
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_L2_loadrd_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrd_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrd_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrd_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadrd_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbzw2_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadbzw2_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadbzw2_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int ReN = insn->regno[1];
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_L2_loadbzw2_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbzw2_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbzw2_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbzw2_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbzw2_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbzw4_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_L4_loadbzw4_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_L4_loadbzw4_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int ReN = insn->regno[1];
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_L2_loadbzw4_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbzw4_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbzw4_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbzw4_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbzw4_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbsw2_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadbsw2_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadbsw2_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int ReN = insn->regno[1];
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_L2_loadbsw2_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbsw2_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbsw2_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbsw2_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbsw2_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbsw4_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_L4_loadbsw4_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_L4_loadbsw4_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int ReN = insn->regno[1];
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_L2_loadbsw4_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbsw4_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbsw4_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbsw4_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadbsw4_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadalignh_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
}

static void analyze_L4_loadalignh_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
}

static void analyze_L4_loadalignh_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int ReN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_L2_loadalignh_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadalignh_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadalignh_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadalignh_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadalignh_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadalignb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
}

static void analyze_L4_loadalignb_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
}

static void analyze_L4_loadalignb_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int ReN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_L2_loadalignb_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadalignb_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadalignb_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadalignb_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadalignb_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyyN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read_pair(ctx, RyyN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write_pair(ctx, RyyN, false);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_storerb_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerb_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int ReN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_S2_storerb_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerb_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RuN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_storerb_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerb_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerb_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerh_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_storerh_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerh_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int ReN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_S2_storerh_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerh_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RuN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_storerh_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerh_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerh_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_storerf_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerf_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int ReN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_S2_storerf_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerf_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RuN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_storerf_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerf_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerf_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storeri_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_storeri_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storeri_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int ReN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_S2_storeri_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storeri_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RuN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_storeri_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storeri_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storeri_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerd_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RttN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S2_storerd_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RttN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerd_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int ReN = insn->regno[0];
    const int RttN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_S2_storerd_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RttN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerd_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RuN = insn->regno[0];
    const int RttN = insn->regno[1];
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S2_storerd_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RttN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerd_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RttN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerd_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int RttN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerinew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_storerinew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerinew_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int ReN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_S2_storerinew_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerinew_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RuN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_storerinew_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerinew_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerinew_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerbnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_storerbnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerbnew_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int ReN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_S2_storerbnew_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerbnew_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RuN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_storerbnew_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerbnew_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerbnew_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerhnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_storerhnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerhnew_ap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int ReN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, ReN, false);
}

static void analyze_S2_storerhnew_pr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_storerhnew_ur(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RuN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_storerhnew_pbr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerhnew_pci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_storerhnew_pcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_allocframe(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_L2_loadw_aq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L4_loadd_aq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_R6_release_at_vi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_R6_release_st_vi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S2_storew_rl_at_vi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_stored_rl_at_vi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RttN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S2_storew_rl_st_vi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_stored_rl_st_vi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RttN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_L2_deallocframe(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_L4_return(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_L4_return_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L4_return_f(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L4_return_tnew_pt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L4_return_fnew_pt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L4_return_tnew_pnt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L4_return_fnew_pnt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L2_loadw_locked(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_storew_locked(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int PdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_L4_loadd_locked(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S4_stored_locked(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int PdN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_L4_loadrub_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L2_ploadrubt_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrubt_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrubf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrubf_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrubtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrubfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrubt_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrubf_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrubtnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrubfnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrubtnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrubfnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L4_ploadrubt_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrubf_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrubtnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrubfnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_loadrb_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L2_ploadrbt_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrbt_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrbf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrbf_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrbtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrbfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrbt_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrbf_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrbtnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrbfnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrbtnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrbfnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L4_ploadrbt_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrbf_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrbtnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrbfnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_loadruh_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L2_ploadruht_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadruht_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadruhf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadruhf_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadruhtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadruhfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadruht_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadruhf_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadruhtnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadruhfnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadruhtnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadruhfnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L4_ploadruht_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadruhf_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadruhtnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadruhfnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_loadrh_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L2_ploadrht_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrht_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrhf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrhf_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrhtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrhfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrht_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrhf_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrhtnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrhfnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrhtnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrhfnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L4_ploadrht_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrhf_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrhtnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrhfnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_loadri_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L2_ploadrit_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrit_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrif_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrif_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadritnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadrifnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrit_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrif_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadritnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrifnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L2_ploadritnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrifnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RdN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L4_ploadrit_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrif_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadritnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_ploadrifnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_L4_loadrd_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_L2_ploadrdt_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L2_ploadrdt_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write_pair(ctx, RddN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrdf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L2_ploadrdf_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write_pair(ctx, RddN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrdtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L2_ploadrdfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L4_ploadrdt_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L4_ploadrdf_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L4_ploadrdtnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L4_ploadrdfnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L2_ploadrdtnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write_pair(ctx, RddN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L2_ploadrdfnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write_pair(ctx, RddN, true);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_L4_ploadrdt_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RddN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L4_ploadrdf_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RddN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L4_ploadrdtnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RddN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_L4_ploadrdfnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PtN = insn->regno[0];
    const int RddN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PtN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_S4_storerb_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerbt_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerbt_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerbf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerbf_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerbt_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerbf_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerbtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerbfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerbtnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerbfnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerbtnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerbfnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerbt_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerbf_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerbtnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerbfnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_storerh_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerht_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerht_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerhf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerhf_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerht_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerhf_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerhtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerhfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerhtnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerhfnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerhtnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerhfnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerht_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerhf_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerhtnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerhfnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_storerf_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerft_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerft_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerff_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerff_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerft_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerff_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerftnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerffnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerftnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerffnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerftnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerffnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerft_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerff_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerftnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerffnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_storeri_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerit_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerit_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerif_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstorerif_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerit_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerif_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstoreritnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerifnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstoreritnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerifnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_pstoreritnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerifnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerit_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerif_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstoreritnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_pstorerifnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S4_storerd_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RuN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S2_pstorerdt_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S2_pstorerdt_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerdf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S2_pstorerdf_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerdt_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RttN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S4_pstorerdf_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RttN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S4_pstorerdtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S4_pstorerdfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S4_pstorerdtnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RttN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S4_pstorerdfnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int RttN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S2_pstorerdtnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerdfnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerdt_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RttN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S4_pstorerdf_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RttN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S4_pstorerdtnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RttN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S4_pstorerdfnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RttN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S4_storerinew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RuN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_pstorerinewt_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_pstorerinewt_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerinewf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_pstorerinewf_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerinewt_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int NtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerinewf_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int NtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerinewtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerinewfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerinewtnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int NtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerinewfnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int NtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_pstorerinewtnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerinewfnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerinewt_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerinewf_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerinewtnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerinewfnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_storerbnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RuN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_pstorerbnewt_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_pstorerbnewt_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerbnewf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_pstorerbnewf_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerbnewt_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int NtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerbnewf_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int NtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerbnewtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerbnewfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerbnewtnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int NtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerbnewfnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int NtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_pstorerbnewtnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerbnewfnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerbnewt_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerbnewf_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerbnewtnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerbnewfnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_storerhnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RuN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_pstorerhnewt_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_pstorerhnewt_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerhnewf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_pstorerhnewf_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerhnewt_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int NtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerhnewf_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int NtN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerhnewtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerhnewfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerhnewtnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int NtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerhnewfnew_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    const int NtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_pstorerhnewtnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S2_pstorerhnewfnew_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int NtN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read_new(ctx, NtN);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_S4_pstorerhnewt_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerhnewf_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerhnewtnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S4_pstorerhnewfnew_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int NtN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_L4_add_memopw_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_L4_add_memopb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_L4_add_memoph_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_L4_sub_memopw_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_L4_sub_memopb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_L4_sub_memoph_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_L4_and_memopw_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_L4_and_memopb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_L4_and_memoph_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_L4_or_memopw_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_L4_or_memopb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_L4_or_memoph_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_L4_iadd_memopw_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_L4_iadd_memopb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_L4_iadd_memoph_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_L4_isub_memopw_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_L4_isub_memopb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_L4_isub_memoph_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_L4_iand_memopw_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_L4_iand_memopb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_L4_iand_memoph_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_L4_ior_memopw_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_L4_ior_memopb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_L4_ior_memoph_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirbt_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirbf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirbtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirbfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirht_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirhf_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirhtnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirhfnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirit_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirif_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeiritnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirifnew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PvN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PvN);
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeirh_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_S4_storeiri_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_L2_loadrubgp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L2_loadrbgp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L2_loadruhgp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L2_loadrhgp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L2_loadrigp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_L2_loadrdgp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_storerbgp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_storerhgp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_storerfgp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_storerigp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_S2_storerdgp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RttN = insn->regno[0];
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_S2_storerinewgp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NtN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_storerbnewgp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NtN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_S2_storerhnewgp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int NtN = insn->regno[0];
    ctx_log_reg_read_new(ctx, NtN);
}

static void analyze_C2_cmpeq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_cmpgt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_cmpgtu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_cmpeqp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_cmpgtp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_cmpgtup(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_rcmpeqi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A4_rcmpneqi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A4_rcmpeq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A4_rcmpneq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_C2_bitsset(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_bitsclr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_nbitsset(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_nbitsclr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_cmpeqi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_cmpgti(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_cmpgtui(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_bitsclri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_nbitsclri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_cmpneqi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_cmpltei(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_cmplteui(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_cmpneq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_cmplte(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_cmplteu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PtN = insn->regno[1];
    const int PsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PtN = insn->regno[1];
    const int PsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    const int PtN = insn->regno[2];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_andn(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PtN = insn->regno[1];
    const int PsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_not(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_orn(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PtN = insn->regno[1];
    const int PsN = insn->regno[2];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_and_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    const int PtN = insn->regno[2];
    const int PuN = insn->regno[3];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_read(ctx, PuN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_and_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    const int PtN = insn->regno[2];
    const int PuN = insn->regno[3];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_read(ctx, PuN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_or_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    const int PtN = insn->regno[2];
    const int PuN = insn->regno[3];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_read(ctx, PuN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_or_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    const int PtN = insn->regno[2];
    const int PuN = insn->regno[3];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_read(ctx, PuN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_and_andn(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    const int PtN = insn->regno[2];
    const int PuN = insn->regno[3];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_read(ctx, PuN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_and_orn(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    const int PtN = insn->regno[2];
    const int PuN = insn->regno[3];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_read(ctx, PuN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_or_andn(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    const int PtN = insn->regno[2];
    const int PuN = insn->regno[3];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_read(ctx, PuN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_or_orn(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    const int PtN = insn->regno[2];
    const int PuN = insn->regno[3];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_read(ctx, PuN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_any8(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_all8(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_vitpack(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int PsN = insn->regno[1];
    const int PtN = insn->regno[2];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_C2_mux(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int PuN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_C2_cmovenewit(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_C2_cmovenewif(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_C2_cmoveit(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_C2_cmoveif(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_C2_ccombinewnewt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_C2_ccombinewnewf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_C2_ccombinewt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_C2_ccombinewf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RddN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, true);
}

static void analyze_C2_muxii(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int PuN = insn->regno[1];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_C2_muxir(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int PuN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_C2_muxri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int PuN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_C2_vmux(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int PuN = insn->regno[1];
    const int RssN = insn->regno[2];
    const int RttN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_C2_mask(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int PtN = insn->regno[1];
    ctx_log_pred_read(ctx, PtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vcmpbeq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_vcmpbeqi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_vcmpbeq_any(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A6_vcmpbeq_notany(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A2_vcmpbgtu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_vcmpbgtui(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_vcmpbgt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_vcmpbgti(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_cmpbeq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_cmpbeqi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_cmpbgtu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_cmpbgtui(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_cmpbgt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_cmpbgti(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A2_vcmpheq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A2_vcmphgt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A2_vcmphgtu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_vcmpheqi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_vcmphgti(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_vcmphgtui(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_cmpheq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_cmphgt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_cmphgtu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_cmpheqi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_cmphgti(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_cmphgtui(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A2_vcmpweq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A2_vcmpwgt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A2_vcmpwgtu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_vcmpweqi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_vcmpwgti(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_vcmpwgtui(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_boundscheck_hi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_boundscheck_lo(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_A4_tlbmatch(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C2_tfrpr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int PsN = insn->regno[1];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_C2_tfrrp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_fastcorner9(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    const int PtN = insn->regno[2];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_C4_fastcorner9_not(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int PsN = insn->regno[1];
    const int PtN = insn->regno[2];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_pred_read(ctx, PtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_M2_mpy_acc_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_sat_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_sat_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_sat_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_sat_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_sat_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_sat_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_sat_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_acc_sat_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_sat_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_sat_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_sat_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_sat_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_sat_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_sat_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_sat_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_nac_sat_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpy_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_rnd_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_rnd_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_rnd_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_rnd_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_rnd_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_rnd_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_rnd_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_rnd_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_rnd_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_rnd_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_rnd_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_rnd_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_rnd_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_rnd_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_rnd_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_sat_rnd_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpyd_acc_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_acc_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_acc_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_acc_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_acc_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_acc_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_acc_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_acc_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_nac_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_nac_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_nac_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_nac_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_nac_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_nac_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_nac_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_nac_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyd_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_rnd_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_rnd_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_rnd_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_rnd_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_rnd_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_rnd_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_rnd_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyd_rnd_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyu_acc_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_acc_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_acc_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_acc_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_acc_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_acc_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_acc_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_acc_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_nac_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_nac_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_nac_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_nac_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_nac_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_nac_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_nac_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_nac_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyu_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpyu_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpyu_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpyu_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpyu_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpyu_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpyu_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpyu_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpyud_acc_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_acc_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_acc_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_acc_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_acc_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_acc_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_acc_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_acc_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_nac_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_nac_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_nac_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_nac_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_nac_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_nac_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_nac_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_nac_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpyud_hh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyud_hh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyud_hl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyud_hl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyud_lh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyud_lh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyud_ll_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpyud_ll_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mpysip(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpysin(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_macsip(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_macsin(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_dpmpyss_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_dpmpyss_acc_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_dpmpyss_nac_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_dpmpyuu_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_dpmpyuu_acc_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_dpmpyuu_nac_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mpy_up(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_up_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpy_up_s1_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpyu_up(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mpysu_up(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_dpmpyss_rnd_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M4_mac_up_s1_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_nac_up_s1_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mpyi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_maci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_mnaci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_acci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_accii(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_nacci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_naccii(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M2_subacc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_mpyrr_addr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RyN = insn->regno[0];
    const int RuN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RyN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RyN, false);
}

static void analyze_M4_mpyri_addr_u2(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RuN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M4_mpyri_addr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RuN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M4_mpyri_addi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M4_mpyrr_addi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_vmpy2s_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vmpy2s_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vmac2s_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vmac2s_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vmpy2su_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vmpy2su_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vmac2su_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vmac2su_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vmpy2s_s0pack(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_vmpy2s_s1pack(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_vmac2(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vmpy2es_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vmpy2es_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vmac2es_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vmac2es_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vmac2es(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vrmac_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vrmpy_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vdmpyrs_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_vdmpyrs_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M5_vrmpybuu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M5_vrmacbuu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M5_vrmpybsu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M5_vrmacbsu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M5_vmpybuu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M5_vmpybsu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M5_vmacbuu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M5_vmacbsu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M5_vdmpybsu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M5_vdmacbsu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vdmacs_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vdmacs_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vdmpys_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vdmpys_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_cmpyrs_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_cmpyrs_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_cmpyrsc_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_cmpyrsc_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_cmacs_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_cmacs_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_cmacsc_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_cmacsc_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_cmpys_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_cmpys_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_cmpysc_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_cmpysc_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_cnacs_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_cnacs_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_cnacsc_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_cnacsc_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vrcmpys_s1_h(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vrcmpys_s1_l(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vrcmpys_acc_s1_h(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vrcmpys_acc_s1_l(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vrcmpys_s1rp_h(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_vrcmpys_s1rp_l(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mmacls_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmacls_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmachs_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmachs_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmpyl_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmpyl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmpyh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmpyh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmacls_rs0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmacls_rs1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmachs_rs0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmachs_rs1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmpyl_rs0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmpyl_rs1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmpyh_rs0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmpyh_rs1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M4_vrmpyeh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M4_vrmpyeh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M4_vrmpyeh_acc_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M4_vrmpyeh_acc_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M4_vrmpyoh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M4_vrmpyoh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M4_vrmpyoh_acc_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M4_vrmpyoh_acc_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_hmmpyl_rs1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_hmmpyh_rs1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_hmmpyl_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_hmmpyh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_mmaculs_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmaculs_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmacuhs_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmacuhs_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmpyul_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmpyul_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmpyuh_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmpyuh_s1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmaculs_rs0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmaculs_rs1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmacuhs_rs0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmacuhs_rs1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_mmpyul_rs0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmpyul_rs1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmpyuh_rs0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_mmpyuh_rs1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vrcmaci_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vrcmacr_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vrcmaci_s0c(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vrcmacr_s0c(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_cmaci_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_cmacr_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vrcmpyi_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vrcmpyr_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vrcmpyi_s0c(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vrcmpyr_s0c(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_cmpyi_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_cmpyr_s0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M4_cmpyi_wh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M4_cmpyr_wh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M4_cmpyi_whc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M4_cmpyr_whc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_vcmpy_s0_sat_i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vcmpy_s0_sat_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vcmpy_s1_sat_i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vcmpy_s1_sat_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vcmac_s0_sat_i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vcmac_s0_sat_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_vcrotate(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S4_vrcrotate_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S4_vrcrotate(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vcnegh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vrcnegh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M4_pmpyw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M4_vpmpyh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M4_pmpyw_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M4_vpmpyh_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M7_dcmpyrw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M7_dcmpyrw_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M7_dcmpyrwc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M7_dcmpyrwc_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M7_dcmpyiw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M7_dcmpyiw_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M7_dcmpyiwc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M7_dcmpyiwc_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M7_wcmpyrw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M7_wcmpyrwc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M7_wcmpyiw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M7_wcmpyiwc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M7_wcmpyrw_rnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M7_wcmpyrwc_rnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M7_wcmpyiw_rnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M7_wcmpyiwc_rnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_add(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_sub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_paddt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_paddf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_paddtnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_paddfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_psubt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RtN = insn->regno[2];
    const int RsN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_psubf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RtN = insn->regno[2];
    const int RsN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_psubtnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RtN = insn->regno[2];
    const int RsN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_psubfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RtN = insn->regno[2];
    const int RsN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_paddit(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_paddif(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_padditnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_paddifnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_pxort(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_pxorf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_pxortnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_pxorfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_pandt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_pandf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_pandtnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_pandfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_port(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_porf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_portnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_porfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_psxtbt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_psxtbf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_psxtbtnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_psxtbfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_pzxtbt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_pzxtbf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_pzxtbtnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_pzxtbfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_psxtht(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_psxthf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_psxthtnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_psxthfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_pzxtht(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_pzxthf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_pzxthtnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_pzxthfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_paslht(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_paslhf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_paslhtnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_paslhfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_pasrht(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_pasrhf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_pasrhtnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A4_pasrhfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PuN = insn->regno[0];
    const int RdN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_pred_read_new(ctx, PuN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_A2_addsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_C4_addipc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addh_l16_ll(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addh_l16_hl(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addh_l16_sat_ll(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addh_l16_sat_hl(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subh_l16_ll(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subh_l16_hl(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subh_l16_sat_ll(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subh_l16_sat_hl(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addh_h16_ll(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addh_h16_lh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addh_h16_hl(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addh_h16_hh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addh_h16_sat_ll(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addh_h16_sat_lh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addh_h16_sat_hl(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addh_h16_sat_hh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subh_h16_ll(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subh_h16_lh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subh_h16_hl(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subh_h16_hh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subh_h16_sat_ll(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subh_h16_sat_lh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subh_h16_sat_hl(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_subh_h16_sat_hh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_aslh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_asrh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_addp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_addpsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_addspl(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_addsph(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_subp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A4_addp_c(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    const int PxN = insn->regno[3];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_read(ctx, PxN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_pred_write(ctx, PxN);
}

static void analyze_A4_subp_c(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    const int PxN = insn->regno[3];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_read(ctx, PxN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_pred_write(ctx, PxN);
}

static void analyze_A2_negsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_abs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_abssat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_vconj(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_negp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_absp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_max(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_maxu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_min(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_minu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_maxp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_maxup(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_minp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_minup(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_nop(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_A4_ext(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_A2_tfr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_tfrsi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_sxtb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_zxth(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_sxth(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_combinew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A4_combineri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A4_combineir(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_combineii(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A4_combineii(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_combine_hh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_combine_hl(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_combine_lh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_combine_ll(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_tfril(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_A2_tfrih(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_A2_tfrcrr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int CsN = insn->regno[1]  + HEX_REG_SA0;
    ctx_log_reg_read(ctx, CsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_tfrrcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int CdN = insn->regno[0]  + HEX_REG_SA0;
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, CdN, false);
}

static void analyze_A4_tfrcpp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int CssN = insn->regno[1] + HEX_REG_SA0;
    ctx_log_reg_read_pair(ctx, CssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A4_tfrpcp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int CddN = insn->regno[0] + HEX_REG_SA0;
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, CddN, false);
}

static void analyze_A2_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_xor_xacc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_xor_xacc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_A4_andn(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A4_orn(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A4_andnp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A4_ornp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S4_addaddi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S4_subaddi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RuN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M4_and_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_and_andn(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_and_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_and_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_or_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_or_andn(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_or_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_or_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_or_andix(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RuN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_or_andi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_or_ori(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_xor_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_xor_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_M4_xor_andn(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_A2_subri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_andir(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_orir(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_andp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_orp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_xorp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_notp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_sxtw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_roundsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_sath(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_satuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_satub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_satb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_vaddub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vaddubs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vaddh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vaddhs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vadduhs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A5_vaddhubs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_vaddw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vaddws(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S4_vxaddsubw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S4_vxsubaddw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S4_vxaddsubh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S4_vxsubaddh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S4_vxaddsubhr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S4_vxsubaddhr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_svavgh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_svavghs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_svnavgh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_svaddh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_svaddhs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_svadduhs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_svsubh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_svsubhs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_svsubuhs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_vraddub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vraddub_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_M2_vraddh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_M2_vradduh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A2_vsubub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vsububs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vsubh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vsubhs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vsubuhs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vsubw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vsubws(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vabsh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vabshsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vabsw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vabswsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vabsdiffw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M2_vabsdiffh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M6_vabsdiffb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_M6_vabsdiffub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vrsadub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vrsadub_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_A2_vavgub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vavguh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vavgh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vnavgh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vavgw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vnavgw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vavgwr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vnavgwr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vavgwcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vnavgwcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vavghcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vnavghcr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vavguw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vavguwr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vavgubr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vavguhr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vavghr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vnavghr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A4_round_ri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A4_round_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A4_round_ri_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A4_round_rr_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A4_cround_ri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A4_cround_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A7_croundd_ri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A7_croundd_rr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A7_clip(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_A7_vclip(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A4_vrminh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RuN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_A4_vrmaxh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RuN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_A4_vrminuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RuN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_A4_vrmaxuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RuN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_A4_vrminw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RuN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_A4_vrmaxw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RuN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_A4_vrminuw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RuN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_A4_vrmaxuw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RuN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RuN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_A2_vminb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vmaxb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vminub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vmaxub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vminh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vmaxh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vminuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vmaxuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vminw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vmaxw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vminuw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_vmaxuw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A5_ACS(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int PeN = insn->regno[1];
    const int RssN = insn->regno[2];
    const int RttN = insn->regno[3];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
    ctx_log_pred_write(ctx, PeN);
}

static void analyze_A6_vminub_RdP(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int PeN = insn->regno[1];
    const int RttN = insn->regno[2];
    const int RssN = insn->regno[3];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
    ctx_log_pred_write(ctx, PeN);
}

static void analyze_A4_modwrapu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_sfadd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_sfsub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_sfmpy(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_sffma(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_F2_sffma_sc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    const int PuN = insn->regno[3];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_F2_sffms(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_F2_sffma_lib(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_F2_sffms_lib(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_F2_sfcmpeq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_F2_sfcmpgt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_F2_sfcmpge(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_F2_sfcmpuo(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_F2_sfmax(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_sfmin(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_sfclass(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_F2_sfimm_p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_sfimm_n(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_sfrecipa(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int PeN = insn->regno[1];
    const int RsN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_pred_write(ctx, PeN);
}

static void analyze_F2_sffixupn(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_sffixupd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_sfinvsqrta(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int PeN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
    ctx_log_pred_write(ctx, PeN);
}

static void analyze_F2_sffixupr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_dfadd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_dfsub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_dfmax(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_dfmin(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_dfmpyfix(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_dfmpyll(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_dfmpylh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_F2_dfmpyhh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_F2_dfcmpeq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_F2_dfcmpgt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_F2_dfcmpge(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_F2_dfcmpuo(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_F2_dfclass(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_F2_dfimm_p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_dfimm_n(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_sf2df(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_df2sf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_uw2sf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_uw2df(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_w2sf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_w2df(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_ud2sf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_ud2df(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_d2sf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_d2df(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_sf2uw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_sf2w(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_sf2ud(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_sf2d(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_df2uw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_df2w(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_df2ud(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_df2d(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_sf2uw_chop(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_sf2w_chop(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_sf2ud_chop(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_sf2d_chop(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_df2uw_chop(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_df2w_chop(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_F2_conv_df2ud_chop(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_F2_conv_df2d_chop(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asr_r_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_asl_r_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_lsr_r_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_lsl_r_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_asr_r_p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asl_r_p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_lsr_r_p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_lsl_r_p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asr_r_r_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asl_r_r_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsr_r_r_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsl_r_r_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asr_r_p_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asl_r_p_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsr_r_p_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsl_r_p_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asr_r_r_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asl_r_r_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsr_r_r_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsl_r_r_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asr_r_p_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asl_r_p_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsr_r_p_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsl_r_p_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asr_r_r_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asl_r_r_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsr_r_r_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsl_r_r_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asr_r_r_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asl_r_r_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsr_r_r_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsl_r_r_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asr_r_p_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asl_r_p_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsr_r_p_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsl_r_p_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asr_r_p_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asl_r_p_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsr_r_p_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsl_r_p_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asr_r_p_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asl_r_p_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsr_r_p_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsl_r_p_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asr_r_r_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_asl_r_r_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_asr_i_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_lsr_i_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_asl_i_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S6_rol_i_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_asr_i_p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_lsr_i_p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asl_i_p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S6_rol_i_p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asr_i_r_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsr_i_r_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asl_i_r_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S6_rol_i_r_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asr_i_p_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsr_i_p_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asl_i_p_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S6_rol_i_p_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asr_i_r_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsr_i_r_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asl_i_r_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S6_rol_i_r_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asr_i_p_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsr_i_p_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asl_i_p_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S6_rol_i_p_nac(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsr_i_r_xacc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asl_i_r_xacc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S6_rol_i_r_xacc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsr_i_p_xacc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asl_i_p_xacc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S6_rol_i_p_xacc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asr_i_r_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsr_i_r_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asl_i_r_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S6_rol_i_r_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asr_i_r_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_lsr_i_r_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asl_i_r_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S6_rol_i_r_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_asr_i_p_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsr_i_p_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asl_i_p_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S6_rol_i_p_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asr_i_p_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_lsr_i_p_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asl_i_p_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S6_rol_i_p_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S2_asl_i_r_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_asr_i_r_rnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_asr_i_p_rnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S4_lsli(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_addasl_rrri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S4_andi_asl_ri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_ori_asl_ri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_addi_asl_ri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_subi_asl_ri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_andi_lsr_ri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_ori_lsr_ri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_addi_lsr_ri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_subi_lsr_ri(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_valignib(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_valignrb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    const int PuN = insn->regno[3];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vspliceib(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vsplicerb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    const int PuN = insn->regno[3];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_pred_read(ctx, PuN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vsplatrh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vsplatrb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S6_vsplatrbp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_insert(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_tableidxb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_tableidxh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_tableidxw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S2_tableidxd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_A4_bitspliti(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A4_bitsplit(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S4_extract(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_extractu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_insertp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S4_extractp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_extractup(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_mask(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_insert_rp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_S4_extract_rp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_extractu_rp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_insertp_rp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxxN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RxxN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RxxN, false);
}

static void analyze_S4_extractp_rp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_extractup_rp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_tstbit_i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_S4_ntstbit_i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_S2_setbit_i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_togglebit_i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_clrbit_i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_tstbit_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_S4_ntstbit_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int PdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_pred_write(ctx, PdN);
}

static void analyze_S2_setbit_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_togglebit_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_clrbit_r(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_asr_i_vh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_lsr_i_vh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asl_i_vh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asr_r_vh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S5_asrhub_rnd_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S5_asrhub_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S5_vasrhrnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asl_r_vh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_lsr_r_vh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_lsl_r_vh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asr_i_vw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asr_i_svw_trun(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_asr_r_svw_trun(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_lsr_i_vw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asl_i_vw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asr_r_vw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_asl_r_vw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_lsr_r_vw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_lsl_r_vw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vrndpackwh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_vrndpackwhs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_vsxtbh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vzxtbh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vsathub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_svsathub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_svsathb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_vsathb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_vtrunohb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_vtrunewh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vtrunowh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vtrunehb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S6_vtrunehb_ppp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S6_vtrunohb_ppp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vsxthw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vzxthw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vsatwh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_vsatwuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_packhl(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_A2_swiz(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_vsathub_nopack(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vsathb_nopack(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vsatwh_nopack(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_vsatwuh_nopack(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_shuffob(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_shuffeb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_shuffoh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RttN = insn->regno[1];
    const int RssN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_shuffeh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S5_popcountp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S4_parity(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_parityp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_lfsp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_clbnorm(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S4_clbaddi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S4_clbpnorm(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S4_clbpaddi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_cabacdecbin(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_clb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_cl0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_cl1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_clbp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_cl0p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_cl1p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_brev(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_brevp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_ct0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_ct1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_ct0p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_ct1p(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_S2_interleave(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_S2_deinterleave(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RssN = insn->regno[1];
    ctx_log_reg_read_pair(ctx, RssN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_J2_trap0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_J2_pause(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_Y2_icinva(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_Y2_isync(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_Y2_barrier(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_Y2_syncht(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_Y2_dcfetchbo(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_Y2_dczeroa(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_Y2_dccleana(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_Y2_dccleaninva(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_Y2_dcinva(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_Y4_l2fetch(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_Y5_l2fetch(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RttN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_SA1_addi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_SA1_tfr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SA1_seti(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SA1_setin1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SA1_clrtnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_SA1_clrfnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_SA1_clrt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_SA1_clrf(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, true);
}

static void analyze_SA1_addsp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SA1_inc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SA1_dec(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SA1_addrx(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RxN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_SA1_zxtb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SA1_and1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SA1_sxtb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SA1_zxth(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SA1_sxth(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SA1_combinezr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_SA1_combinerz(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_SA1_combine0i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_SA1_combine1i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_SA1_combine2i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_SA1_combine3i(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_SA1_cmpeqi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_SL1_loadri_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SL1_loadrub_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SL2_loadrh_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SL2_loadruh_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SL2_loadrb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    const int RsN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SL2_loadri_sp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RdN = insn->regno[0];
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_SL2_loadrd_sp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RddN = insn->regno[0];
    ctx_log_reg_write_pair(ctx, RddN, false);
}

static void analyze_SL2_deallocframe(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_SL2_return(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_SL2_return_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_SL2_return_f(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_SL2_return_tnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_SL2_return_fnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_SL2_jumpr31(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_SL2_jumpr31_t(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_SL2_jumpr31_f(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_SL2_jumpr31_tnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_SL2_jumpr31_fnew(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_SS1_storew_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_SS1_storeb_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_SS2_storeh_io(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_SS2_stored_sp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RttN = insn->regno[0];
    ctx_log_reg_read_pair(ctx, RttN);
}

static void analyze_SS2_storew_sp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RtN = insn->regno[0];
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_SS2_storewi0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_SS2_storebi0(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_SS2_storewi1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_SS2_storebi1(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const int RsN = insn->regno[0];
    ctx_log_reg_read(ctx, RsN);
}

static void analyze_SS2_allocframe(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
}

static void analyze_V6_vL32b_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_cur_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_cur_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_cur_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_tmp_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_tmp_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_tmp_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_pred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_pred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_pred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    const int MuN = insn->regno[3] + HEX_REG_M0;
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_npred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_npred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_npred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    const int MuN = insn->regno[3] + HEX_REG_M0;
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_cur_pred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_cur_pred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_cur_pred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    const int MuN = insn->regno[3] + HEX_REG_M0;
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_cur_npred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_cur_npred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_cur_npred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    const int MuN = insn->regno[3] + HEX_REG_M0;
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_tmp_pred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_tmp_pred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_tmp_pred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    const int MuN = insn->regno[3] + HEX_REG_M0;
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_tmp_npred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_tmp_npred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_tmp_npred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    const int MuN = insn->regno[3] + HEX_REG_M0;
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RxN = insn->regno[0];
    const int VsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RtN = insn->regno[0];
    const int VsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int VsN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_pred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_pred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_pred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VsN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_npred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_npred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_npred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VsN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_qpred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_qpred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_qpred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VsN = insn->regno[3];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_nqpred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_nqpred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_nqpred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VsN = insn->regno[3];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32Ub_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32Ub_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32Ub_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32Ub_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RxN = insn->regno[0];
    const int VsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32Ub_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RtN = insn->regno[0];
    const int VsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32Ub_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int VsN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32Ub_pred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32Ub_pred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32Ub_pred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VsN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32Ub_npred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32Ub_npred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32Ub_npred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VsN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_new_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RxN = insn->regno[0];
    const int OsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_new_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RtN = insn->regno[0];
    const int OsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_new_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int OsN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_srls_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RxN = insn->regno[0];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_srls_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RtN = insn->regno[0];
    ctx_log_reg_read(ctx, RtN);
}

static void analyze_V6_vS32b_srls_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_new_pred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int OsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_new_pred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int OsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_new_pred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int OsN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_new_npred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int OsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_new_npred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int OsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_new_npred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int OsN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_nt_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RxN = insn->regno[0];
    const int VsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_nt_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RtN = insn->regno[0];
    const int VsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_nt_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int VsN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_nt_pred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_nt_pred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_nt_pred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VsN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_nt_npred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_nt_npred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_nt_npred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VsN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_nt_new_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RxN = insn->regno[0];
    const int OsN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_nt_new_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RtN = insn->regno[0];
    const int OsN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_nt_new_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int RxN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int OsN = insn->regno[2];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_nt_new_pred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int OsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_nt_new_pred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int OsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_nt_new_pred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int OsN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_nt_new_npred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int OsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_nt_new_npred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int OsN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_nt_new_npred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int OsN = insn->regno[3];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read_new(ctx, OsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vS32b_nt_qpred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_nt_qpred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_nt_qpred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VsN = insn->regno[3];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_nt_nqpred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vS32b_nt_nqpred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int VsN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
}

static void analyze_V6_vS32b_nt_nqpred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VsN = insn->regno[3];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VsN, insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_nt_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_nt_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_nt_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_nt_cur_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_nt_cur_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_nt_cur_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_nt_tmp_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_nt_tmp_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_nt_tmp_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RxN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, false,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, false);
}

static void analyze_V6_vL32b_nt_pred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_nt_pred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_nt_pred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    const int MuN = insn->regno[3] + HEX_REG_M0;
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_nt_npred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_nt_npred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_nt_npred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    const int MuN = insn->regno[3] + HEX_REG_M0;
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_nt_cur_pred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_nt_cur_pred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_nt_cur_pred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    const int MuN = insn->regno[3] + HEX_REG_M0;
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_nt_cur_npred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_nt_cur_npred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_nt_cur_npred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    const int MuN = insn->regno[3] + HEX_REG_M0;
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_NEW, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_nt_tmp_pred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_nt_tmp_pred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_nt_tmp_pred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    const int MuN = insn->regno[3] + HEX_REG_M0;
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_nt_tmp_npred_pi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_vL32b_nt_tmp_npred_ai(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vL32b_nt_tmp_npred_ppu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PvN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int RxN = insn->regno[2];
    const int MuN = insn->regno[3] + HEX_REG_M0;
    ctx_log_pred_read(ctx, PvN);
    ctx_log_reg_read(ctx, RxN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, true,
                       insn_has_hvx_helper);
    ctx_log_reg_write(ctx, RxN, true);
}

static void analyze_V6_valignb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlalignb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_valignbi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlalignbi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vror(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vunpackub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vunpackb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vunpackuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vunpackh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vunpackob(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vunpackoh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vpackeb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vpackeh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vpackob(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vpackoh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vpackhub_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vpackhb_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vpackwuh_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vpackwh_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vzb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vzh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vdmpybus(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpybus_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpybus_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vdmpybus_dv_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhb_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhb_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhb_dv_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhvsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhvsat_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhsat_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhisat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhisat_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhsusat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhsusat_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhsuisat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdmpyhsuisat_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vtmpyb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vtmpyb_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vtmpybus(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vtmpybus_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vtmpyhb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vtmpyhb_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vrmpyub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrmpyub_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrmpyubv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrmpyubv_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrmpybv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrmpybv_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrmpyubi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vrmpyubi_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vrmpybus(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrmpybus_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrmpybusi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vrmpybusi_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vrmpybusv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrmpybusv_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdsaduh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vdsaduh_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vrsadubi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vrsadubi_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vasrw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaslw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlsrw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrwv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaslwv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlsrwv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaslh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlsrh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrhv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaslhv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlsrhv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlsrb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrotr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasr_into(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vasrwh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrwhsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrwhrndsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrwuhrndsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrwuhsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasruwuhrndsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasruwuhsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrhubsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrhubrndsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrhbsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrhbrndsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrvwuhsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrvwuhrndsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrvuhubsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrvuhubrndsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasruhubsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasruhubrndsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vroundwh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vroundwuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrounduwuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vroundhb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vroundhub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrounduhub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaslw_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrw_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaslh_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vasrh_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddb_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsubb_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vaddh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddh_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsubh_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vaddw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddw_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsubw_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vaddubsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddubsat_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsububsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsububsat_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vadduhsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vadduhsat_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsubuhsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubuhsat_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vadduwsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vadduwsat_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsubuwsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubuwsat_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vaddbsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddbsat_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsubbsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubbsat_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vaddhsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddhsat_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsubhsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubhsat_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vaddwsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddwsat_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsubwsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubwsat_dv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vavgub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vavgubrnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vavguh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vavguhrnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vavguw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vavguwrnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vavgb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vavgbrnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vnavgb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vavgh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vavghrnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vnavgh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vavgw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vavgwrnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vnavgw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vabsdiffub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vabsdiffuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vabsdiffh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vabsdiffw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vnavgub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddcarrysat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int QsN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddcarry(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int QxN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vsubcarry(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int QxN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vaddcarryo(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int QeN = insn->regno[1];
    const int VuN = insn->regno[2];
    const int VvN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QeN, insn_has_hvx_helper);
}

static void analyze_V6_vsubcarryo(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int QeN = insn->regno[1];
    const int VuN = insn->regno[2];
    const int VvN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QeN, insn_has_hvx_helper);
}

static void analyze_V6_vsatdw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddububb_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubububb_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddubh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsububh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vaddhw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsubhw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vadduhw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vsubuhw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vaddhw_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vadduhw_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vaddubh_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vaddbq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QvN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubbq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QvN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddbnq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QvN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubbnq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QvN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddhq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QvN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubhq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QvN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddhnq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QvN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubhnq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QvN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddwq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QvN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubwq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QvN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddwnq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QvN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsubwnq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QvN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vabsb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vabsb_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vabsh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vabsh_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vabsw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vabsw_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpybv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpybv_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyubv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyubv_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpybusv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpybusv_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpabusv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpabuuv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyhv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyhv_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyuhv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyuhv_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyhvsrs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyuhvs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyhus(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyhus_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyih(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyih_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyewuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyowh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyowh_rnd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyewuh_64(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyowh_64_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyowh_sacc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyowh_rnd_sacc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyieoh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyiewuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyiowh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyiewh_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyiewuh_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyub_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpybus(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpybus_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpabus(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpabus_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpabuu(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpabuu_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpahb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpahb_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpauhb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpauhb_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyh_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyhsat_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyhss(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyhsrs(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyuh_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpyihb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyihb_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyiwb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyiwb_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyiwub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyiwub_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyiwh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyiwh_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vand(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vxor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vnot(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vandqrt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int QuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_qreg_read(ctx, QuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vandqrt_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int QuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_qreg_read(ctx, QuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vandnqrt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int QuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_qreg_read(ctx, QuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vandnqrt_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int QuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_qreg_read(ctx, QuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vandvrt(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_vandvrt_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vandvqv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int QvN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vandvnqv(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int QvN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vgtw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_vgtw_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtw_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtw_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_veqw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_veqw_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_veqw_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_veqw_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgth(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_vgth_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgth_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgth_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_veqh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_veqh_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_veqh_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_veqh_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_vgtb_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtb_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtb_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_veqb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_veqb_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_veqb_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_veqb_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtuw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_vgtuw_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtuw_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtuw_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_vgtuh_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtuh_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtuh_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_vgtub_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtub_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_vgtub_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_qreg_read(ctx, QxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QxN, insn_has_hvx_helper);
}

static void analyze_V6_pred_scalar2(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_pred_scalar2v2(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_shuffeqw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QdN = insn->regno[0];
    const int QsN = insn->regno[1];
    const int QtN = insn->regno[2];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_qreg_read(ctx, QtN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_shuffeqh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QdN = insn->regno[0];
    const int QsN = insn->regno[1];
    const int QtN = insn->regno[2];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_qreg_read(ctx, QtN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_pred_or(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int QsN = insn->regno[1];
    const int QtN = insn->regno[2];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_qreg_read(ctx, QtN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_pred_and(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int QsN = insn->regno[1];
    const int QtN = insn->regno[2];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_qreg_read(ctx, QtN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_pred_xor(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int QsN = insn->regno[1];
    const int QtN = insn->regno[2];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_qreg_read(ctx, QtN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_pred_or_n(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int QsN = insn->regno[1];
    const int QtN = insn->regno[2];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_qreg_read(ctx, QtN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_pred_and_n(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int QsN = insn->regno[1];
    const int QtN = insn->regno[2];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_qreg_read(ctx, QtN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_pred_not(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QdN = insn->regno[0];
    const int QsN = insn->regno[1];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_qreg_write(ctx, QdN, insn_has_hvx_helper);
}

static void analyze_V6_vcmov(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PsN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vncmov(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int PsN = insn->regno[0];
    const int VdN = insn->regno[1];
    const int VuN = insn->regno[2];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, true,
                       insn_has_hvx_helper);
}

static void analyze_V6_vccombine(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int PsN = insn->regno[0];
    const int VddN = insn->regno[1];
    const int VuN = insn->regno[2];
    const int VvN = insn->regno[3];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, true,
                            insn_has_hvx_helper);
}

static void analyze_V6_vnccombine(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int PsN = insn->regno[0];
    const int VddN = insn->regno[1];
    const int VuN = insn->regno[2];
    const int VvN = insn->regno[3];
    ctx_log_pred_read(ctx, PsN);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, true,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmux(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int QtN = insn->regno[1];
    const int VuN = insn->regno[2];
    const int VvN = insn->regno[3];
    ctx_log_qreg_read(ctx, QtN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vswap(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int QtN = insn->regno[1];
    const int VuN = insn->regno[2];
    const int VvN = insn->regno[3];
    ctx_log_qreg_read(ctx, QtN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmaxb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vminb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmaxub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vminub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmaxuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vminuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmaxh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vminh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmaxw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vminw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsathub(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsatwh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vsatuwuh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vshuffeb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vshuffob(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vshufeh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vshufoh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vshuff(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VyN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VyN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VyN, EXT_DFL, false,
                       insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vshuffvdd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vdeal(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VyN = insn->regno[0];
    const int VxN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VyN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VyN, EXT_DFL, false,
                       insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdealvdd(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vshufoeh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vshufoeb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vdealh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdealb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdealb4w(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vshuffh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vshuffb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_extractw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int RdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RsN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RsN);
    ctx_log_reg_write(ctx, RdN, false);
}

static void analyze_V6_vinsertwr(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_lvsplatw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_lvsplath(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_lvsplatb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int RtN = insn->regno[1];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vassign(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vcombine(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vcombine_tmp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_TMP, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vassign_tmp(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_TMP, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vdelta(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vrdelta(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vcl0w(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vcl0h(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vnormamtw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vnormamth(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddclbw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vaddclbh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vpopcounth(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vhist(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
}

static void analyze_V6_vhistq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
}

static void analyze_V6_vwhist256(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
}

static void analyze_V6_vwhist256q(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
}

static void analyze_V6_vwhist256_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
}

static void analyze_V6_vwhist256q_sat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
}

static void analyze_V6_vwhist128(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
}

static void analyze_V6_vwhist128q(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
}

static void analyze_V6_vwhist128m(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
}

static void analyze_V6_vwhist128qm(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = false;
    const int QvN = insn->regno[0];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
}

static void analyze_V6_vlutvvb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlutvvb_oracc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlutvwh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vlutvwh_oracc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vlutvvbi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlutvvb_oracci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlutvwhi(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vlutvwh_oracci(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vlutvvb_nm(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlutvwh_nm(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int VvN = insn->regno[2];
    const int RtN = insn->regno[3];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vmpahhsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpauhuhsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpsuhuhsat(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vlut4(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RttN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read_pair(ctx, RttN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyuhe(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vmpyuhe_acc(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxN = insn->regno[0];
    const int VuN = insn->regno[1];
    const int RtN = insn->regno[2];
    ctx_log_vreg_read(ctx, VxN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VuN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_vreg_write(ctx, VxN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vgathermw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int RtN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int VvN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
}

static void analyze_V6_vgathermh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int RtN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int VvN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
}

static void analyze_V6_vgathermhw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int RtN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int VvvN = insn->regno[2];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
}

static void analyze_V6_vgathermwq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QsN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VvN = insn->regno[3];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
}

static void analyze_V6_vgathermhq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QsN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VvN = insn->regno[3];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
}

static void analyze_V6_vgathermhwq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QsN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VvvN = insn->regno[3];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
}

static void analyze_V6_vscattermw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int RtN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int VvN = insn->regno[2];
    const int VwN = insn->regno[3];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VwN, insn_has_hvx_helper);
}

static void analyze_V6_vscattermh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int RtN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int VvN = insn->regno[2];
    const int VwN = insn->regno[3];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VwN, insn_has_hvx_helper);
}

static void analyze_V6_vscattermw_add(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int RtN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int VvN = insn->regno[2];
    const int VwN = insn->regno[3];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VwN, insn_has_hvx_helper);
}

static void analyze_V6_vscattermh_add(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int RtN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int VvN = insn->regno[2];
    const int VwN = insn->regno[3];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VwN, insn_has_hvx_helper);
}

static void analyze_V6_vscattermwq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QsN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VvN = insn->regno[3];
    const int VwN = insn->regno[4];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VwN, insn_has_hvx_helper);
}

static void analyze_V6_vscattermhq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QsN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VvN = insn->regno[3];
    const int VwN = insn->regno[4];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read(ctx, VvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VwN, insn_has_hvx_helper);
}

static void analyze_V6_vscattermhw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int RtN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int VvvN = insn->regno[2];
    const int VwN = insn->regno[3];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VwN, insn_has_hvx_helper);
}

static void analyze_V6_v6mpyvubs10_vxx(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_v6mpyhubs10_vxx(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VxxN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VxxN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VxxN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_v6mpyvubs10(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_v6mpyhubs10(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VddN = insn->regno[0];
    const int VuuN = insn->regno[1];
    const int VvvN = insn->regno[2];
    ctx_log_vreg_read_pair(ctx, VuuN, insn_has_hvx_helper);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_write_pair(ctx, VddN, EXT_DFL, false,
                            insn_has_hvx_helper);
}

static void analyze_V6_vscattermhwq(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int QsN = insn->regno[0];
    const int RtN = insn->regno[1];
    const int MuN = insn->regno[2] + HEX_REG_M0;
    const int VvvN = insn->regno[3];
    const int VwN = insn->regno[4];
    ctx_log_qreg_read(ctx, QsN, insn_has_hvx_helper);
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VwN, insn_has_hvx_helper);
}

static void analyze_V6_vscattermhw_add(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int RtN = insn->regno[0];
    const int MuN = insn->regno[1] + HEX_REG_M0;
    const int VvvN = insn->regno[2];
    const int VwN = insn->regno[3];
    ctx_log_reg_read(ctx, RtN);
    ctx_log_reg_read(ctx, MuN);
    ctx_log_vreg_read_pair(ctx, VvvN, insn_has_hvx_helper);
    ctx_log_vreg_read(ctx, VwN, insn_has_hvx_helper);
}

static void analyze_V6_vprefixqb(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int QvN = insn->regno[1];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vprefixqh(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int QvN = insn->regno[1];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

static void analyze_V6_vprefixqw(DisasContext *ctx)
{
    Insn *insn G_GNUC_UNUSED = ctx->insn;
    const bool G_GNUC_UNUSED insn_has_hvx_helper = true;
    ctx_start_hvx_insn(ctx);
    const int VdN = insn->regno[0];
    const int QvN = insn->regno[1];
    ctx_log_qreg_read(ctx, QvN, insn_has_hvx_helper);
    ctx_log_vreg_write(ctx, VdN, EXT_DFL, false,
                       insn_has_hvx_helper);
}

#endif    /* HEXAGON_ANALYZE_FUNCS_C_INC */
