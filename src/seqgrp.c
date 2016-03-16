/*
 * Copyright (c) 2015-2016, Dalian Futures Information Technology Co., Ltd.
 *
 * Xiaoye Meng <mengxiaoye at dce dot com dot cn>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <limits.h>
#include "macros.h"
#include "mem.h"
#include "util.h"
#include "seqgrp.h"

/* FIXME */
seqgrp_t seqgrp_new(seq_t *seqs, int length) {
	seqgrp_t seqgrp;

	if (unlikely(NEW(seqgrp) == NULL))
		return NULL;
	seqgrp->length = length;
	seqgrp->seqs   = seqs;
	return seqgrp;
}

/* FIXME */
void seqgrp_free(seqgrp_t *sgp) {
	if (unlikely(sgp == NULL || *sgp == NULL))
		return;
	FREE(*sgp);
}

/* FIXME */
int seqgrp_size(seqgrp_t seqgrp) {
	if (unlikely(seqgrp == NULL))
		return 0;
	return seqgrp->length;
}

/* FIXME */
long seqgrp_get(seqgrp_t seqgrp) {
	if (unlikely(seqgrp == NULL))
		return LONG_MAX;
	return get_min_seq(seqgrp->seqs, seqgrp->length, LONG_MAX);
}

/* FIXME */
void seqgrp_set(seqgrp_t seqgrp, long val) {
}

/* FIXME */
void seqgrp_add(seqgrp_t seqgrp, seq_t seq) {
}

/* FIXME */
bool seqgrp_remove(seqgrp_t seqgrp, seq_t seq) {
	return false;
}
